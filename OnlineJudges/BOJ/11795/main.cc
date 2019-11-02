#include <iostream>
#include <algorithm>
using namespace std;

int T, a[2], b[2], c[2];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> a[1] >> b[1] >> c[1];
        a[0] += a[1];
        b[0] += b[1];
        c[0] += c[1];
        int d = 0;
        if (a[0] < 30 || b[0] < 30 || c[0] < 30) {}
        else d = min(min(a[0], b[0]), c[0]);
        a[0] -= d;
        b[0] -= d;
        c[0] -= d;
        if (d == 0) cout << "NO";
        else cout << d;
        cout << '\n';
    }

    return 0;
}
