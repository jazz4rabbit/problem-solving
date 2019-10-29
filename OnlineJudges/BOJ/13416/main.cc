#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T, N, A, B, C, ret;
    cin >> T;
    while (T--) {
        cin >> N;
        ret = 0;
        while (N--) {
            cin >> A >> B >> C;
            ret += max(max(A, B), max(C, 0));
        }

        cout << ret << '\n';
    }

    return 0;
}
