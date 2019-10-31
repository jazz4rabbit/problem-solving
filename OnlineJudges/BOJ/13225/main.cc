#include <iostream>
using namespace std;

int C, n;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> C;
    while (C--) {
        cin >> n;
        int ret = 0;
        for (int i=1; i<=n; ++i)
            if (n%i == 0) ++ret;
        cout << n << ' ' << ret << '\n';
    }

    return 0;
}
