#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

#define vll vector<long long>
#define BS 1003
char s[BS];

struct Bigint {
    static const int base = 1e9;
    static const int base_digits = 9;

    int sign;
    vll a;
    Bigint() : sign(1) {}
    Bigint(char* s) {
        int pos = 0;
        if (s[0] == '-') sign = -1, ++pos;
        else sign = 1;
        for (int i=strlen(s)-1; i>=pos; i-=base_digits) {
            int x=0;
            for (int j=max(pos,i-base_digits+1); j<=i; ++j)
                x = x*10 + s[j]-'0';
            a.push_back(x);
        }
        if (!a.empty() && a.back() == 0) a.pop_back();
    }


    Bigint operator+(const Bigint& rhs) const {
        if (sign == rhs.sign) {
            if (a.size() < rhs.a.size()) return rhs + *this;
            Bigint ret = *this;
            addTo(ret.a, rhs.a, 0);
            return ret;
        }
        else
            return *this - (-rhs);
    }

    Bigint operator-(const Bigint& rhs) const {
        if (sign == rhs.sign) {
            if (abs(*this) < abs(rhs)) return -(rhs - *this);
            Bigint ret = *this;
            subFrom(ret.a, rhs.a);
            return ret;
        }
        else
            return *this + (-rhs);
    }

    Bigint operator-() const {
        Bigint ret = *this;
        ret.sign = -sign;
        return ret;
    }

    Bigint operator*(const Bigint& rhs) const {
        Bigint ret;
        ret.a = karatsuba(a, rhs.a);
        ret.sign = sign*rhs.sign;
        return ret;
    }

    bool operator<(const Bigint& rhs) {
        if (sign != rhs.sign)
            return sign < rhs.sign;
        if (a.size() != rhs.a.size())
            return a.size()*sign < rhs.a.size()*rhs.sign;
        for (int i=a.size()-1; i>=0; --i)
            if (a[i] != rhs.a[i])
                return a[i]*sign < rhs.a[i]*sign;
        return false;
    }


    static Bigint abs(const Bigint& v) {
        Bigint ret=v;
        ret.sign = 1;
        return ret;
    }

    static void addTo(vll& a, const vll& b, int k) {
        int nsz = a.size() < b.size()+k ? b.size()+k : a.size();
        while ((int)a.size() <= nsz) a.push_back(0);
        for (int i=0, carry=0; i<(int)b.size() || carry; ++i) {
            a[i+k] += carry + (i<(int)b.size() ? b[i] : 0);
            carry = a[i+k] >= base;
            if (carry) a[i+k] -=base;
        }
        if (a.back() == 0) a.pop_back();
    }

    // a >= b
    static void subFrom(vll& a, const vll& b) {
        for (int i=0, carry=0; i<(int)b.size() || carry; ++i) {
            a[i] -= carry + (i<(int)b.size() ? b[i] : 0);
            carry = a[i] < 0;
            if (carry) a[i] += base;
        }
        while (!a.empty() && a.back() == 0) a.pop_back();
    }

    static vll karatsuba(const vll& a, const vll& b) {
        int an = a.size(), bn = b.size();
        if (an < bn) return karatsuba(b,a);
        if (bn == 0) return vll();
        vll ret(an+bn,0);
        if (an <= 32) {
            for (int i=0; i<an; ++i) {
                long long carry=0;
                for (int j=0; j<bn || carry; ++j) {
                    long long cur = carry + ret[i+j] + (j<bn ? a[i]*b[j] : 0);
                    ret[i+j] = cur % base;
                    carry = cur / base;
                }
            }
            if (ret.back() == 0) ret.pop_back();
            return ret;
        }
        int k = an >> 1;
        vll a1(a.begin(), a.begin()+k);
        vll a2(a.begin()+k, a.end());
        vll b1(b.begin(), b.begin()+min<int>(b.size(), k));
        vll b2(b.begin()+min<int>(b.size(), k), b.end());

        vll a1b1 = karatsuba(a1, b1);
        vll a2b2 = karatsuba(a2, b2);
        
        addTo(a1, a2, 0); addTo(b1, b2, 0);
        vll r = karatsuba(a1, b1);
        subFrom(r, a1b1);
        subFrom(r, a2b2);

        addTo(ret, a1b1, 0);
        addTo(ret, r, k);
        addTo(ret, a2b2, k+k);
        if (!ret.empty() && ret.back() == 0) ret.pop_back();
        return ret;
    }

    friend ostream& operator<<(ostream& out, const Bigint& v) {
        if (!v.a.empty() && v.sign == -1)
            cout << '-';
        out << (v.a.empty() ? 0 : v.a.back());
        for (int i=v.a.size()-2; i>=0; --i)
            out << setw(base_digits) << setfill('0') << v.a[i];
        return out;
    }
};


Bigint a,b;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> s;
    a = Bigint(s);
    cin >> s;
    b = Bigint(s);

    cout << a+b << '\n'
         << a-b << '\n'
         << a*b << '\n';
    return 0;
}
