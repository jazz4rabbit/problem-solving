#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int a0, d, an;

    while (true) {
        cin >> a0 >> d >> an;
        if (d == 0) break;
        int nd = an - a0;
        if (nd % d != 0) cout << "X" << '\n';
        else cout << nd/d+1 << '\n';
    }

    return 0;
}
