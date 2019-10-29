#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, K;
    long long ret=0;
    cin >> N;
    N*=N;
    while (N--) cin >> K, ret += K;
    cout << ret << endl;

    return 0;
}
