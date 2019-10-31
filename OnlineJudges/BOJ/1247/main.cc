#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define vll vector<long long>

struct Bigint {
    static const long long base = 1e6;
    static const int base_digits = 6;

    vll a;
    int sign;

    Bigint (long long v) : sign(1) {
        if (v < 0) sign = -sign, v = -v;
        while (v > 0) {
            a.push_back(v%base);
            v /= base;
        }
    }

    void operator+=(const Bigint& v) {
        if (sign == v.sign) {
            if (a.size() < v.a.size()) {
                Bigint tmp = *this;
                *this = v;
                *this += tmp;
            } else {
                a.push_back(0);
                for (int i=0, carry=0; i<(int)v.a.size() || carry; ++i) {
                    a[i] += carry + (i<(int)v.a.size() ? v.a[i] : 0);
                    carry = a[i] >= base;
                    if (carry) a[i]-=base;
                }
                if (!a.empty() && !a.back()) a.pop_back();
                if (a.empty()) sign = 1;
            }
        }
        else {
            // a + (-b) == -(-a - (-b))
            sign = -sign;
            *this -= v;
            sign = -sign;
        }
    }

    static bool abs_less(const vll& a, const vll& b) {
        if (a.size() != b.size()) return a.size() < b.size();
        for (int i=a.size()-1; i>=0; --i)
            if (a[i] != b[i]) return a[i] < b[i];
        return false;
    }

    void operator-=(const Bigint& v) {
        if (sign == v.sign) {
            if (abs_less(a, v.a)) {
                // a - b == -(b - a)
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
                while (!a.empty() && !a.back()) a.pop_back();
                if (a.empty()) sign = 1;
            }
        }
        else {
            // a - (-b) == -(-a + (-b))
            sign = -sign;
            *this += v;
            sign = -sign;
        }
    }
};

int N;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int tt = 3;
    while (tt--) {
        cin >> N;
        Bigint ret = 0;
        while (N--) {
            long long v;
            cin >> v;
            ret += v;
        }
        string res;
        if (ret.a.empty()) res = "0";
        else res = ret.sign == 1 ? "+" : "-";
        cout << res << '\n';
    }

    return 0;
}
