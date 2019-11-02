#include <iostream>
using namespace std;

#define NMAX 100001

int N, cnt[NMAX], ni;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N;
    for (int i=0; i<N; ++i) {
        cin >> ni;
        ++cnt[ni];
    }

    int ret = -1;
    for (int i=N; i>=0; --i) {
        if (cnt[i] == i) {
            ret = i;
            break;
        }
    }

    cout << ret << endl;

    return 0;
}
