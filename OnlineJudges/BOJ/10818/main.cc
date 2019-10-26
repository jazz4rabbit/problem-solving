#include <iostream>
using namespace std;

#define INF 1000000

int main(void)
{
    ios::sync_with_stdio(false);
    int N, mx, mn;
    cin >> N;
    mx = -INF, mn = INF;
    while (N--) {
        int a;
        cin >> a;
        if (a > mx) mx = a;
        else if (a < mn) mn = a;
    }

    cout << mn << ' ' << mx << '\n';

    return 0;
}
