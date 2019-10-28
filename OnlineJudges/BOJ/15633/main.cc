#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int n;
    cin >> n;

    int ret = 0;
    for (int i=1; i<=n; ++i)
        if (n%i==0) ret += i;

    cout << ret*5-24 << endl;

    return 0;
}
