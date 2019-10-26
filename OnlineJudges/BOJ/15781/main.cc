#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, M, h, j, mxh, mxj;
    cin >> N >> M;

    mxh = mxj = 0;
    while (N--) {
        cin >> h;
        if (h > mxh) mxh = h;
    }
    while (M--) {
        cin >> j;
        if (j > mxj) mxj = j;
    }

    cout << mxh + mxj << endl;

    return 0;
}
