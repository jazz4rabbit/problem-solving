#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int s, n, q, p, ret;
        cin >> s >> n;

        ret = s;
        while (n--) {
            cin >> q >> p;
            ret += q*p;
        }

        cout << ret << endl;
    }

    return 0;
}
