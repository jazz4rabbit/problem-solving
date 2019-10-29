#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T, N, C;
    cin >> T;
    while (T--) {
        cin >> N >> C;
        cout << N/C + (N%C != 0) << '\n';
    }

    return 0;
}
