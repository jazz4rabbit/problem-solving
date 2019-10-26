#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int acc;
    int mx, mxidx;
    mx = 0;
    for (int i=1; i<=5; ++i) {
        acc = 0;
        for (int j=0; j<4; ++j) {
            int a;
            cin >> a;
            acc += a;
        }
        if (acc > mx) mx = acc, mxidx = i;
    }

    cout << mxidx << ' ' << mx << endl;

    return 0;
}
