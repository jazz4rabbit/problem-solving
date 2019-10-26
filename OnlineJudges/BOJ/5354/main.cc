#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;

        if (n == 1) cout << "#\n";
        else {
            for (int i=0; i<n; ++i) cout << '#';
            cout << '\n';
            for (int i=1; i<n-1; ++i) {
                cout << '#';
                for (int j=1; j<n-1; ++j) cout << 'J';
                cout << '#';
                cout << '\n';
            }
            for (int i=0; i<n; ++i) cout << '#';
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
