#include <iostream>
using namespace std;

int l, w, a;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (true) {
        cin >> l >> w >> a;
        if (l+w+a == 0) break;
        if (l == 0) l = a/w;
        else if (w == 0) w = a/l;
        else a = l*w;
        cout << l << ' ' << w << ' ' << a << '\n';
    }

    return 0;
}
