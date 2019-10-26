#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N, K, ret=0;
        cin >> N >> K;
        while (N--) {
            int a;
            cin >> a;
            ret += a / K;
        }
        cout << ret << '\n';
    }

    return 0;
}
