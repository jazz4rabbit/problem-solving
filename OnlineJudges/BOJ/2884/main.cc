#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int H, M;
    cin >> H >> M;
    M -= 45;
    if (M < 0) M += 60, --H;
    if (H < 0) H = 23;

    cout << H << ' ' << M << '\n';

    return 0;
}
