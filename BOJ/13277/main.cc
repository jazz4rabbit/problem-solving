#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

#define vll vector<long long>

struct Bigint {
    static const int base = 1e9;
    static const int base_digits = 9;
    static vll& trim(vll& a) {
        while (!a.empty() && a.back() == 0) a.pop_back();
        return a;
    }

    vll a;

    Bigint() = default;
    Bigint(string s) {
        for (int i=s.size()-1; i>=0; i-=base_digits) {
            int x = 0;
            for (int j=max(0, i-base_digits+1); j<=i; ++j)
                x = x*10 + s[j] - '0';
            a.push_back(x);
        }
        trim(a);
    }

    vll& addTo(vll& a, const vll& b, int k) {
        int nsz = a.size() < b.size()+k ? b.size()+k : a.size();
        while ((int)a.size() <= nsz) a.push_back(0);
        for (int i=0, carry=0; i<(int)b.size() || carry; ++i) {
            a[i+k] += carry + (i<(int)b.size() ? b[i] : 0);
            carry = a[i+k] >= base;
            if (carry) a[i+k] -= base;
        }
        return trim(a);
    }

    // a>=b
    vll& subFrom(vll& a, const vll& b) {
        for (int i=0, carry=0; i<(int)b.size() || carry; ++i) {
            a[i] -= carry + (i<(int)b.size() ? b[i] : 0);
            carry = a[i] < 0;
            if (carry) a[i] += base;
        }
        return trim(a);
    }

    vll karatsuba(const vll& a, const vll& b) {
        int an = a.size(), bn = b.size();

        if (an < bn) return karatsuba(b,a);
        if (bn == 0) return vll();
        vll ret(an+bn, 0);
        if (an <= 32) {
            for (int i=0; i<an; ++i) {
                for (int j=0, carry=0; j<bn || carry; ++j) {
                    long long cur = ret[i+j] + carry + (j<bn ? a[i]*b[j] : 0);
                    ret[i+j] = cur % base;
                    carry = cur / base;
                }
            }
            return trim(ret);
        }
        int k = an >> 1;
        vll a1(a.begin(), a.begin()+k);
        vll a2(a.begin()+k, a.end());
        vll b1(b.begin(), b.begin() + min<int>(b.size(), k));
        vll b2(b.begin() + min<int>(b.size(), k), b.end());

        trim(a1); trim(b1);
        vll a1b1 = karatsuba(a1,b1);
        vll a2b2 = karatsuba(a2,b2);

        addTo(a2,a1,0); addTo(b2,b1,0);
        vll r = karatsuba(a2,b2);
        subFrom(r, a2b2);
        subFrom(r, a1b1);

        addTo(ret, a2b2, k+k);
        addTo(ret, a1b1, 0);
        addTo(ret, r, k);

        return ret;
    }

    Bigint operator*(const Bigint& rhs) {
        Bigint ret;
        ret.a = karatsuba(a, rhs.a);
        return ret;
    }

    friend ostream& operator<<(ostream& out, const Bigint& v) {
        out << (v.a.empty() ? 0 : v.a.back());
        for (int i=v.a.size()-2; i>=0; --i)
            out << setw(base_digits) << setfill('0') << v.a[i];
        return out;
    }
};

Bigint a, b;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    string s;
    cin >> s, a = Bigint(s);
    cin >> s, b = Bigint(s);

    cout << a*b << endl;
    return 0;
}
