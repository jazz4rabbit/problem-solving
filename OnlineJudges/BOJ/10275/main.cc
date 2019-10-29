#include <iostream>
using namespace std;

int t, n;
long long a, b;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> t;
    while (t--) {
        cin >> n >> a >> b;
        long long lsb = a & -a;
        int ret = 0;
        while (true) {
            n--;
            ++ret;
            if (lsb == 1LL<<n) break;
        }

        cout << ret << '\n';
    }

    return 0;
}
