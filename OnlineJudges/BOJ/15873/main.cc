#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int AB, ret;
    cin >> AB;

    if (AB % 10 == 0) ret = AB / 100 + AB % 100;
    else ret = AB/10 + AB % 10;

    cout << ret << endl;

    return 0;
}
