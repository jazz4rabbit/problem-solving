#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int a[3];
    for (int i=0; i<3; ++i) cin >> a[i];
    sort(a, a+3);

    int d1, d2, ret;
    d1 = a[1] - a[0];
    d2 = a[2] - a[1];

    if (d1 == d2) ret = a[2] + d1;
    else {
        if (abs(d1) < abs(d2)) ret = a[1] + d1;
        else ret = a[0] + d2;
    }

    cout << ret << endl;

    return 0;
}
