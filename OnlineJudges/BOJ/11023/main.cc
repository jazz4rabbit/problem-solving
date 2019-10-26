#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int a, ret=0;
    while (cin >> a) ret += a;
    cout << ret << endl;

    return 0;
}
