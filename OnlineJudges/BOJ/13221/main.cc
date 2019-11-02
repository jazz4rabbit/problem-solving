#include <iostream>
#include <algorithm>
using namespace std;

int N, x, y, a, b, mn, d, retx, rety;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> x >> y >> N >> a >> b;
    --N;
    mn = abs(x-a) + abs(y-b);
    retx = a, rety = b;
    while (N--) {
        cin >> a >> b;
        d = abs(x-a) + abs(y-b);
        if (mn > d) mn = d, retx = a, rety = b;
    }

    cout << retx << ' ' << rety << endl;

    return 0;
}
