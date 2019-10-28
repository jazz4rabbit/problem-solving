#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N, D, ret = 0;
        cin >> N >> D;
        while (N--) {
            int vi, fi, ci;
            cin >> vi >> fi >> ci;
            if (D*ci <= fi*vi) ++ret;
        }
        cout << ret << '\n';
    }

    return 0;
}
