#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);

    int a, ret=0;
    while (cin >> a)
        if (a > 0) ++ret;

    cout << ret << endl;

    return 0;
}
