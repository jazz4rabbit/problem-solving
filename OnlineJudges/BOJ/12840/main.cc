#include <iostream>
using namespace std;

int h, m, s, tc, c, cmd;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> h >> m >> s >> tc;
    while (tc--) {
        cin >> cmd;
        if (cmd == 3) {
            if (s < 0) s += 60, --m;
            if (m < 0) m += 60, --h; 
            if (h < 0) h += 24;
            cout << h << ' ' << m << ' ' << s << '\n';
        }
        else {
            cin >> c;
            s += cmd == 1 ? c : -c;
            m += s/60; s%=60;
            h += m/60; m%=60;
            h%=24;
        }
    }

    return 0;
}
