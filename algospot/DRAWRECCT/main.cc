#include <iostream>
using namespace std;

int tt;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> tt;
    while (tt--) {
        int y1, x1, y2, x2, dy, dx, dyCnt, dxCnt;
        dyCnt = dxCnt = 0;
        cin >> y1 >> x1;

        for (int i=0; i<2; ++i) {
            cin >> y2 >> x2;
            int dytmp = y2 - y1, dxtmp = x2 - x1;
            if (dytmp != 0) ++dyCnt, dy = dytmp;
            if (dxtmp != 0) ++dxCnt, dx = dxtmp;
        }
        cout << y1 + (dyCnt == 1 ? dy : 0)
             << ' '
             << x1 + (dxCnt == 1 ? dx : 0)
             << '\n';
    }

    return 0;
}
