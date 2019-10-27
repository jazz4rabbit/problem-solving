#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, m, M, T, R, ret;
    cin >> N >> m >> M >> T >> R;

    if (m + T > M) ret = -1;
    else {
        int c = m;
        ret = 0;
        while (true) {
            while (true) {
                if (c + T > M || N == 0) break;
                c += T, ++ret, --N;
            }
            if (N == 0) break;
            while (true) {
                if (c + T <= M) break;
                c -= R, ++ret;
                if (c < m) c = m;
            }
        }
    }
    cout << ret << endl;

    return 0;
}
