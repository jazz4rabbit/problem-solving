#include <iostream>
#include <algorithm>
using namespace std;

int T, l[3];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    for (int i=1; i<=T; ++i) {
        for (int i=0; i<3; ++i) cin >> l[i];
        sort(l, l+3);

        cout << "Case #" << i << ": ";
        if (l[0]+l[1] <= l[2]) cout << "invalid!";
        else if (l[0] == l[2]) cout << "equilateral";
        else if (l[0] == l[1] || l[1] == l[2]) cout << "isosceles";
        else cout << "scalene";
        cout << '\n';
    }

    return 0;
}
