#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int pos[3];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (cin >> pos[0] >> pos[1] >> pos[2]) {
        sort(pos, pos+3);
        cout << max(abs(pos[0] - pos[1]), abs(pos[1]-pos[2])) - 1 << '\n';
    }

    return 0;
}
