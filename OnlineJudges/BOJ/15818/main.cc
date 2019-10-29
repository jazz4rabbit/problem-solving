#include <iostream>
using namespace std;

long long N, M, ai, ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N >> M;
    ret = 1;
    while (N--) {
        cin >> ai;
        ret *= ai;
        if (ret >= M) ret%=M;
    }
    cout << ret << endl;

    return 0;
}
