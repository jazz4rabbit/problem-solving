#include <iostream>
using namespace std;

int T, N;

bool solve(int N)
{
    int tmp = N*N;
    while (N != 0) {
        if (N%10 != tmp%10) return false;
        N/=10, tmp/=10;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> N;
        cout << (solve(N) ? "YES" : "NO") << '\n';
    }

    return 0;
}
