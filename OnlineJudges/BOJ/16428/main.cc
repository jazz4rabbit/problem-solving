#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
using namespace std;

#define vll vector<long long>

struct Bigint {
    static const int base = 1e8;
    static const int base_digits = 8;

    int sign;
    vll a; 

    Bigint() : sign(1) {}

    Bigint (string s) {
        int pos = 0;
        if (s[0] == '-') sign = -1, ++pos;
        else sign = 1;

        for (int i=s.size()-1; i>=pos; i-=base_digits) {
            int x = 0;
            for (int j=max(pos, i-base_digits+1); j<=i; ++j)
                x = x*10 + s[j]-'0';
            a.push_back(x);
        }
        trim();
    }

    Bigint (long long v) {
        *this = v;
    }

    void trim() {
        while (!a.empty() && !a.back()) a.pop_back();
        if (a.empty()) sign = 1;
    }

    friend Bigint abs(const Bigint& a) {
        Bigint ret = a;
        ret.sign = 1;
        return ret;
    }

    // A / B        -> A = qB + r
    // A / (-B)     -> A = qB + r  ->   A = (-q)(-B) + r
    // (-A) / B     -> A = qB + r  ->  -A = (-q)B - r  ->  -A = (-q-1)B -r + B
    // (-A) / (-B)  -> A = qB + r  ->  -A = -qB - r    ->  -A = (q+1)(-B) - r + B
    friend pair<Bigint, Bigint> divmod(const Bigint& a1, const Bigint& b1) {
        int norm = base / (b1.a.back() + 1);
        Bigint a = abs(a1) * norm;
        Bigint b = abs(b1) * norm;
        Bigint q, r;
        q.a.resize(a.a.size());

        for (int i=a.a.size()-1; i>=0; --i) {
            r *= base;
            r += a.a[i];
 
            long long s1 = r.a.size() <= b.a.size() ? 0 : r.a[b.a.size()];
            long long s2 = r.a.size() <= b.a.size()-1 ? 0 : r.a[b.a.size()-1];
            long long d = (s1*base + s2) / b.a.back();

            r -= b*d;
            while (r.sign == -1)
                r += b, --d;
            q.a[i] = d;
        }
        q.sign = a1.sign * b1.sign;
        r.sign = a1.sign;
        q.trim();
        r.trim();
        r /= norm;

        if (a1.sign == -1) {
            q += a1.sign*b1.sign;
            r += abs(b1);
        }

        return make_pair(q,r);
    }

    void operator/=(long long v) {
        if (v < 0)
            sign = -sign, v = -v;
        for (int i=a.size()-1, rem=0; i>=0; --i) {
            long long cur = a[i] + (long long)rem*base;
            a[i] = cur / v;
            rem = cur % v;
        }
        trim();
    }

    void operator*=(long long v) {
        if (v < 0) sign = -sign, v = -v;
        a.push_back(0);
        for (int i=0, carry=0; i<(int)a.size(); ++i) {
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

    // assert(v < base)
    void operator=(long long v) {
        if (v < 0) sign=-1, v = -v;
        else sign = 1;
        a.push_back(v);
        trim();
    }


    void operator+=(const Bigint& v) {
        if (sign == v.sign) {
            int ds = 1 + (a.size() < v.a.size() ? v.a.size() - a.size() : 0);
            while (ds--) a.push_back(0);
            for (int i=0, carry=0; i<(int)v.a.size() || carry; ++i) {
                a[i] += carry + (i<(int)v.a.size() ? v.a[i] : 0);
                if (a[i] >= base) carry = 1, a[i] -= base;
                else carry = 0;
            }
            trim();
        }
        else {
            // a+b == -(-a-b)
            sign = -sign;
            *this -= v;
            sign = -sign;
        }
    }
    void operator-=(const Bigint& v) {
        if (sign == v.sign) {
            // abs(a) < abs(b)
            // a - b == -(b - a)
            if (abs_less(*this, v)) {
                Bigint tmp = *this;
                *this = v;
                *this -= tmp;
                sign = -sign;
            }
            else {
                for (int i=0, carry=0; i<(int)v.a.size() || carry; ++i) {
                    a[i] -= carry + (i<(int)v.a.size() ? v.a[i] : 0);
                    if (a[i] < 0) carry = 1, a[i] += base;
                    else carry = 0;
                }
                trim();
            }
        }
        else {
            // a - b == -(-a + b)
            sign = -sign;
            *this += v;
            sign = -sign;
        }
    }

    friend bool abs_less(const Bigint& a, const Bigint& b) {
        if (a.a.size() != b.a.size()) return a.a.size() < b.a.size();
        for (int i=a.a.size()-1; i>=0; --i)
            if (a.a[i] != b.a[i]) return a.a[i] < b.a[i];
        return false;
    }

    friend ostream& operator<<(ostream& out, const Bigint& v) {
        if (v.sign == -1) out << '-';
        out << (v.a.empty() ? 0 : v.a.back());
        for (int i=v.a.size()-2; i >= 0; --i)
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

    auto qr = divmod(a,b);
    cout << qr.first << endl;
    cout << qr.second << endl;

    return 0;
}
