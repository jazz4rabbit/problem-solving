#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int n, a, b, c;
    cin >> n;

    if (n == 0 || n == 1) cout << (n == 0 ? 0 : 1) << '\n';
    else {
        a = 0, b = 1;
        for (int i=0; i<=n-2; ++i) {
            c = b + a;
            a = b;
            b = c;
        }
        cout << c << '\n';
    }

    return 0;
}
