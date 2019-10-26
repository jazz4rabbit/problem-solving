#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N, K, a, ret = 0;
    cin >> N >> K;

    while (K-- && ret < N) {
        cin >> a;
        ret += (a+1)>>1;
    }

    cout << (ret < N ? "NO" : "YES") << endl;

    return 0;
}
