#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int M, X, Y, target = 1;
    cin >> M;
    while (M--) {
        cin >> X >> Y;
        if (X == target || Y == target) target = X == target ? Y : X;
    }

    cout << target << '\n';

    return 0;
}
