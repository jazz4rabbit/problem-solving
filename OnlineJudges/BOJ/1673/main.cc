#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int n, m, k;
    while (cin >> n >> k) {
        int acc;
        m = acc = 0;
        while (n!=0) {
            acc += n;
            m = m + n;
            n = m / k;
            m = m % k;
        }
        cout << acc << '\n';
    }

    return 0;
}
