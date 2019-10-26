#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N;
    cin >> N;

    int ret = 1;
    for (int i=1; i<=N; ++i) ret *= i;
    cout << ret << endl;

    return 0;
}
