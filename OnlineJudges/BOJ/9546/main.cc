#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    // a(k) = 2*a(k-1) + 1
    // a(k) = 2*(2*a(k-2)+1) + 1
    // a(k) = 4*a(k-2) + 1 + 2
    // a(k) = 2^(k-1)a(1) + 1 + 2 + ... + 2^(k-2)
    // a(k) = 1 + 2 + ... + 2^(k-1)
    // a(k) = 2^k-1
    int tt, k;
    cin >> tt;
    while (tt--) {
        cin >> k;
        cout << (1<<k)-1 << '\n';
    }

    return 0;
}
