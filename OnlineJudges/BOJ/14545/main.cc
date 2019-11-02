#include <iostream>
using namespace std;

int P, l;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    // a(n) = n*n + (n-1)*(n-1) + ... + 1
    cin >> P;
    while (P--) {
        cin >> l;
        cout << l*(l+1)/2*(2*l+1)/3 << '\n';
    }

    return 0;
}
