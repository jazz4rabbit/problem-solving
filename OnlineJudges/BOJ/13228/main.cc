#include <iostream>
#include <cmath>
using namespace std;

int T, x[2], y[2], f[2];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        for (int i=0; i<2; ++i) cin >> x[i] >> y[i] >> f[i];
        x[0] -= x[1];
        y[0] -= y[1];
        f[0] += f[1];
        cout << abs(x[0]) + abs(y[0]) + f[0] << '\n';
    }

    return 0;
}
