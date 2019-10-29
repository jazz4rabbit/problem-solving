#include <iostream>
using namespace std;

int a, b, n, w, mx, mn, ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    // ax + b(n-x) = w
    // (a-b)x = w - bn
    cin >> a >> b >> n >> w;
    w -= b*n;

    a -= b;
    if (a == 0) {
        if (w == 0 && n == 2) ret = 1;
    }
    else {
        if (w !=0 && w % a == 0) {
            ret = w / a;
            if (ret < 0) ret = -ret;
        }
    }

    if (ret == 0 || n-ret == 0) cout << -1 << endl;
    else cout << ret << ' ' << n-ret << endl;

    return 0;
}
