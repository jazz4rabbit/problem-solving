#include <iostream>
#include <algorithm>
using namespace std;

int x[3], y[3];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    for (int i=0; i<3; ++i)
        cin >> x[i] >> y[i];
    x[1] -= x[0];
    x[2] -= x[0];
    y[1] -= y[0];
    y[2] -= y[0];

    // (0, 0), (x1, y1), (x2, y2)
    if (x[1]*y[2] - x[2]*y[1] == 0) cout << "X";
    else {
        int l[3];
        l[0] = x[1]*x[1] + y[1]*y[1];
        l[1] = x[2]*x[2] + y[2]*y[2];
        l[2] = (x[2]-x[1])*(x[2]-x[1]) + (y[2]-y[1])*(y[2]-y[1]);
        sort(l, l+3);
        if (l[0] == l[2]) cout << "JungTriangle";
        else if (l[0] == l[1] || l[1] == l[2]) {
            if (l[0] + l[1] < l[2]) cout << "Dunkak2Triangle";
            else if (l[0] + l[1] == l[2]) cout << "Jikkak2Triangle";
            else cout << "Yeahkak2Triangle";
        }
        else {
            if (l[0] + l[1] < l[2]) cout << "DunkakTriangle";
            else if (l[0] + l[1] == l[2]) cout << "JikkakTriangle";
            else cout << "YeahkakTriangle";
        }
    }
    cout << endl;

    return 0;
}
