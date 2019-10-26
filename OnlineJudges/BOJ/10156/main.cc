#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int K, N, M;
    cin >> K >> N >> M;
    int ret = K*N - M;
    if (ret < 0) ret = 0;

    cout << ret << endl;

    return 0;
}
