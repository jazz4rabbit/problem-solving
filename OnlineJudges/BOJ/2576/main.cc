#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int acc=0, mn=100;
    for (int i=0; i<7; ++i) {
        int a;
        cin >> a;
        if (a & 1) {
            acc += a;
            if (a < mn) mn = a;
        }
    }

    if (acc == 0) cout << -1 << endl;
    else cout << acc << '\n' << mn << '\n';

    return 0;
}
