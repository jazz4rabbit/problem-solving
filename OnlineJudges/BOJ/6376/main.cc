#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cout << "n e\n- -----------" << '\n';

    double ret = 0;
    int f = 1;
    for (int i=0; i<=9; ++i) {
        f *= (i == 0 ? 1 : i);
        ret += 1.0 / f;
        if (i<3) cout << i << ' ' << ret << '\n';
        else cout << i << ' ' << fixed << setprecision(9) << ret << '\n';
    }
    return 0;
}
