#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int tt, n;
    cin >> tt;
    while (tt--) {
        cin >> n;
        cout << "Pairs for " << n << ": ";
        if (n>=3 && n<=23) {
            for (int i=1; i<(n-1)/2; ++i) {
                cout << i << ' ' << n-i << ", ";
            }
            int pi = (n-1)/2;
            cout << pi << ' ' << n-pi;
        }
        cout << '\n';
    }

    return 0;
}
