#include <iostream>
using namespace std;

int n;

bool chk(int n)
{
    int m, s=0;
    m = n;
    while (m > 0) s += m%10, m/=10;
    return n%s == 0;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> n;
    while (!chk(n)) ++n;
    cout << n << endl;

    return 0;
}
