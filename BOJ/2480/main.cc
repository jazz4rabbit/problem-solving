#include <iostream>
using namespace std;

int board[7];
int mx, mxidx;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int a;
    for (int i=0; i<3; ++i) {
        cin >> a;
        ++board[a];
        if (mx == board[a] && mxidx < a) mxidx = a;
        else if (mx < board[a]) {
            mx = board[a];
            mxidx = a;
        }
    }

    int money=0;
    if (mx == 3) money = 10000 + mxidx*1000;
    else if (mx == 2) money = 1000 + mxidx*100;
    else money = mxidx*100;

    cout << money << endl;

    return 0;
}
