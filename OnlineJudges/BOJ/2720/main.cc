#include <iostream>
using namespace std;

int c[4] = {25, 10, 5, 1};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int C;
        cin >> C;
        for (int i=0; i<4; ++i) {
            cout << C / c[i] << ' ';
            C %= c[i];
        }
        cout << '\n';
    }

    return 0;
}
