#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N, M;
    cin >> N >> M;

    if (N > M) swap(N,M);
    cout << (N-1) + N*(M-1) << endl;

    return 0;
}
