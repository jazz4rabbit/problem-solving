#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, M, K, R;
    cin >> N >> M >> K;

    if (N > 2*M) R = N - 2*M;
    else {
        R = M - N/2 + N%2;
        M = N/2;
    }
    K -= R;
    if (K < 0) K = 0;

    cout << M - (K/3 + (K%3 == 0 ? 0 : 1)) << endl;

    return 0;
}
