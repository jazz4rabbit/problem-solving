#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N, a, ret=0;
        cin >> N;
        while (N--) cin >> a, ret += a;
        cout << ret << endl;
    }

    return 0;
}
