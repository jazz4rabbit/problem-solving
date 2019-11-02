#include <iostream>
#include <cmath>
using namespace std;

int n, a, b, c, mn, ma, mb, mc;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> n;
    int tn = sqrt(n);
    int nc;
    mn = 1e7;
    for (int i=1; i<=tn; ++i) {
        nc = n;
        if (n%i != 0) continue;
        nc/=i;
        for (int j=i; j<=tn; ++j) {
            if (nc%j != 0) continue;
            int k = nc/j;
            int tmp = i*j + j*k + k*i;
            if (mn > tmp) {
                mn = tmp;
                ma = i, mb = j, mc = k;
            }
        }
    }
    cout << ma << ' ' << mb << ' ' << mc << '\n';

    return 0;
}
