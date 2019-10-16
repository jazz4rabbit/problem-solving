#include <iostream>
#include <vector>   
#include <string>
#include <algorithm>
#include <iomanip>
#include <utility>
using namespace std;

#define vll vector<long long>

struct Bigint {
    static const long long base = 1e8;
    static const int base_digits = 8;

    int sign;
    vll a;

    Bigint() : sign(1) {}

    Bigint(string s) {
        sign = 1;
        for (int i=s.size()-1; i>=0; i-=base_digits) {
            int x = 0;
            for (int j=max(0, i-base_digits+1); j<=i; ++j)
                x = x*10 + s[j] - '0';
            a.push_back(x);
        }
        trim();
    }

    void trim() {
        while (!a.empty() && !a.back()) a.pop_back();
        if (a.empty()) sign = 1;
    }

    void operator*=(long long v) {
        long long carry = 0;
        a.push_back(0);
        for (int i=0; i<(int)a.size(); ++i) {
            long long cur = carry + a[i]*v;
            a[i] = cur % base;
            carry = cur / base;
        }
        trim();
    }

    Bigint operator*(long long v) const {
        Bigint ret = *this;
        ret *= v;
        return ret;
    }
    
    void operator+=(long long v) {
        a.push_back(0);
        int carry;
        a[0] += v;
        carry = a[0] >= base;
        if (carry) a[0] -= base;
        for (int i=1; i<(int)a.size(); ++i) {
            a[i] += carry;
            carry = a[i] >= base;
            if (carry) a[i] -= base;
        }
        trim();
    }

    void operator-=(const Bigint& v) {
        if (sign == v.sign) {
            // |a| < |b|
            if (abs_less(v)) {
                // a = a-b == -(b-a)
                Bigint tmp = *this;
                *this = v;
                *this -= tmp;
                sign = -sign;
            }
            else {
                for (int i=0, carry=0; i<(int)v.a.size() || carry; ++i) {
                    a[i] -= carry + (i<(int)v.a.size() ? v.a[i] : 0);
                    carry = a[i] < 0;
                    if (carry) a[i] += base;
                }
                trim();
            }
        }
        else {
            // a = a-b =: a = -(-a + b)
            sign = -sign;
            *this += v;
            sign = -sign;
        }
    }

    void operator+=(const Bigint& v) {
        if (sign == v.sign) {
            if (a.size() <= v.a.size()) a.push_back(0);
            for (int i=0, carry=0; i<(int)v.a.size() || carry; ++i) {
                a[i] += carry + (i<(int)v.a.size() ? v.a[i] : 0);
                carry = a[i] >= base;
                if (carry) a[i] -= base;
            }
            trim();
        }
        else {
            // a = a + b =: a = -((-a) - b)
            sign = -sign;
            *this -= v;
            sign = -sign;
        }
    }

    bool abs_less(const Bigint& v) const {
        if (a.size() != v.a.size()) return a.size() < v.a.size();
        for (int i=a.size()-1; i>=0; --i)
            if (a[i] != v.a[i])
                return a[i] < v.a[i];
        return false;
    }

    friend pair<Bigint, Bigint> divmod(const Bigint& a, const Bigint& b) {
        Bigint q, r;
        q.a.resize(a.a.size());
        for (int i=a.a.size()-1; i>=0; --i) {
            r *= base;
            r += a.a[i];

            long long s1 = r.a.size() <= b.a.size() ? 0 : r.a[b.a.size()];
            long long s2 = r.a.size() < b.a.size() ? 0 : r.a[b.a.size()-1];
            long long d = (s1*base + s2) / b.a.back();
            r -= b*d;
            while (r.sign == -1)
                r += b, --d;
            q.a[i] = d;
        }

        q.trim();
        r.trim();
        return make_pair(q,r);
    }

    friend ostream& operator<<(ostream& out, Bigint v) {
        if (v.sign == -1) out << '-';
        out << (v.a.empty() ? 0 : v.a.back());
        for (int i=v.a.size()-2; i>=0; --i)
            out << setw(base_digits) << setfill('0') << v.a[i];
        return out;
    }
};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    string s;
    cin >> s;
    Bigint a = Bigint(s);
    cin >> s;
    Bigint b = Bigint(s);

    pair<Bigint,Bigint> qr = divmod(a,b);
    cout << qr.first << endl;
    cout << qr.second << endl;

    return 0;
}
