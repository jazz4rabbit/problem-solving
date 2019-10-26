#include <iostream>
#include <algorithm>
using namespace std;

int A, B, a, b;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> a >> b;
    // a = A+B, b = A-B
    // a+b = 2A, a-b = 2B
    A = a+b;
    B = a-b;
    if (B < 0 || A % 2 == 1) cout << -1 << endl;
    else cout << A/2 << ' ' << B/2 << endl;

    return 0;
}
