#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    long long N, M;
    cin >> N >> M;
    long long ret = N - M;
    if (ret < 0) ret = -ret;

    cout << ret << endl;

    return 0;
}
