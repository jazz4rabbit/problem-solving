#include <iostream>
using namespace std;

int n, m, g;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> n;
    for (int tc=1; tc<=n; ++tc) {
        cout << "Case " << tc << ":\n";

        cin >> m;
        while (m--) {
            cin >> g;
            if (++g <= 6) cout << g << '\n';
        }
    }

    return 0;
}
