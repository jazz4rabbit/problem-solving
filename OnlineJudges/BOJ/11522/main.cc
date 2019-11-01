#include <iostream>
using namespace std;

int P, K, N;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> P;
    while (P--) {
        cin >> K >> N;
        cout << K << ' ' << N*(N+1)/2 << ' ' << N*N << ' ' << N*(N+1) << '\n';
    }

    return 0;
}
