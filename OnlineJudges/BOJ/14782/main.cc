#include <iostream>
using namespace std;

int l, ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> l;
    for (int i=1; i<=l; ++i)
        if (l%i == 0) ret += i;

    cout << ret << endl;

    return 0;
}
