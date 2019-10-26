#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    int k = 0, i = 1;
    while (i<=N) {
        if (N % i == 0) ++k;
        if (k == K) break;
        ++i;
    }

    if (k != K) i = 0;
    cout << i << endl;

    return 0;
}
