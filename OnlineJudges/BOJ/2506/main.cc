#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N;
    cin >> N;
    int ret = 0, k=0;
    for (int i=0; i<N; ++i) {
        int ni;
        cin >> ni;
        k = ni == 1 ? k+1 : 0;
        ret += k;
    }

    cout << ret << endl;

    return 0;
}
