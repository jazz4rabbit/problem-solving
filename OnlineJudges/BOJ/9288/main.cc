#include <iostream>
using namespace std;

int tt, s;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> tt;
    for (int tc=1; tc<=tt; ++tc) {
        cout << "Case " << tc << ":\n";
        cin >> s;
        for (int i=1; i<=s/2; ++i) {
            if (s-i > 6) continue;
            cout << "(" << i << "," << s-i << ")\n";
        }
    }

    return 0;
}
