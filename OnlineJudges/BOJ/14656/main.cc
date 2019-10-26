#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, a, ret=0;
    cin >> N;
    for (int i=1; i<=N; ++i) {
        cin >> a;
        if (a != i) ++ret;
    }
    cout << ret << endl;

    return 0;
}
