#include <iostream>
using namespace std;

int T, d, n, s, p;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> T;
    while (T--) {
        cin >> d >> n >> s >> p;
        int tmp = d+n*(p-s);
        if (tmp == 0) cout << "does not matter";
        else if (tmp < 0) cout << "parallelize";
        else cout << "do not parallelize";
        cout << '\n';
    }

    return 0;
}
