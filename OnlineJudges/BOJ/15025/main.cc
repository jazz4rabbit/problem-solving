#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int l, r;
    cin >> l >> r;

    if (l == r) {
        if (l == 0) cout << "Not a moose" << endl;
        else cout << "Even " << l+r << endl;
    }
    else cout << "Odd " << max(l,r)*2 << endl;

    return 0;
}
