#include <iostream>
#include <algorithm>
using namespace std;

int K, N, M;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> K;
    while (K--) {
        cin >> N >> M;
        cout << (min(N, M)-1)*2 << '\n';
    }

    return 0;
}
