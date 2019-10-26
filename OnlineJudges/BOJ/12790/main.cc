#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int a[8];
        for (int i=0; i<8; ++i) cin >> a[i];
        for (int i=0; i<4; ++i) a[i] += a[i+4];

        for (int i=0; i<2; ++i)
            if (a[i] < 1) a[i] = 1;
        if (a[2] < 0) a[2] = 0;

        cout << a[0] + 5*a[1] + 2*(a[2]+a[3]) << '\n';
    }
    return 0;
}
