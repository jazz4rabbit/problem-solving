#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int aa, ah, ba, bh;
    cin >> aa >> ah >> ba >> bh;

    int an = bh / aa + (bh%aa ? 1 : 0);
    int bn = ah / ba + (ah%ba ? 1 : 0);

    if (an == bn) cout << "DRAW";
    else if (an < bn) cout << "PLAYER A";
    else cout << "PLAYER B";
    cout << '\n';

    return 0;
}
