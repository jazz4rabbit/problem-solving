#include <iostream>
using namespace std;

int T;
long long N, a, ret;

int main(void) {
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> N;
        ret = 0;
        for (int i=0; i<N; ++i) {
            cin >> a;
            ret += a;
            if (ret >= N) ret %= N;
        }
        cout << (ret == 0 ? "YES" : "NO") << '\n';
    }

    return 0;
}
