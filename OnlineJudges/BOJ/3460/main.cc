#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;

    while (T--) {
        int n, p=0;
        cin >> n;

        while (n) {
            if (n & 1) cout << p << ' ';
            n >>= 1, ++p;
        }
        cout << endl;
    }

    return 0;
}
