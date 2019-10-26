#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int D, H, M, ret;
    cin >> D >> H >> M;

    ret = (D-11)*24*60 + (H-11)*60 + M-11;
    ret = ret < 0 ? -1 : ret;

    cout << ret << endl;

    return 0;
}
