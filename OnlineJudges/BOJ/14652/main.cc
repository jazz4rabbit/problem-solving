#include <iostream>
using namespace std;

int N, M, K;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> N >> M >> K;
    cout << K/M << ' ' << K%M << '\n';

    return 0;
}
