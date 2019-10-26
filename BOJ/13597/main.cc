#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int a, b;
    cin >> a >> b;

    if (a == b) cout << a << endl;
    else cout << max(a,b) << endl;

    return 0;
}
