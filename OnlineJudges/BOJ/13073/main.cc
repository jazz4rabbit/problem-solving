#include <iostream>
using namespace std;

int t, N;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> t;
    while (t--) {
        cin >> N;
        cout << N*(N+1)/2 << ' ' << N*N << ' ' << N*(N+1) << '\n';
    }

    return 0;
}
