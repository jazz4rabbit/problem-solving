#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, M, ret;
    cin >> N >> M;
    ret = N;
    while (N >= M) {
        N/=M;
        ret += N;
    }

    cout << ret << endl;

    return 0;
}
