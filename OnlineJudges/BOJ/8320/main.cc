#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int n, ret=0;
    cin >> n;
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=sqrt(i); ++j) {
            if (i%j == 0) ++ret;
        }
    }

    cout << ret << endl;

    return 0;
}
