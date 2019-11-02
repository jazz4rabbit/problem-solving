#include <iostream>
#include <string>
using namespace std;

int T, tc;
string K;

void solve(string K, int& a, int& b, int& c)
{
    a = b = c = 0;
    for (int i=0; i<(int)K.size(); ++i) {
        int d = K[i] - '0';
        if (d >= 8) {
            a = 0;
            break;
        }
        a *= 8;
        a += d;
    }
    for (int i=0; i<(int)K.size(); ++i) {
        int d = K[i] - '0';
        b *= 10;
        b += d;
        c *= 16;
        c += d;
    }
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> tc >> K;
        int a, b, c;
        solve(K, a, b, c);
        cout << tc << ' ' << a << ' ' << b << ' ' << c << '\n';
    }

    return 0;
}
