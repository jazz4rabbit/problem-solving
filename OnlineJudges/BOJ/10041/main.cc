#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int W, H, N, x1, y1, x2, y2, dx, dy, ret=0;
    cin >> W >> H >> N >> x1 >> y1;
    while (N--) {
        cin >> x2 >> y2;

        dx = x2 - x1;
        dy = y2 - y1;
        if (dx*dy > 0) {
            dx = abs(dx), dy = abs(dy);
            ret -= min(dx, dy);
        }
        else dx = abs(dx), dy = abs(dy);
        ret += dx + dy;

        x1 = x2, y1 = y2;
    }

    cout << ret << endl;

    return 0;
}
