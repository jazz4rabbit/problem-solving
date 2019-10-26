#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int n, T, a, ret=0;
    cin >> n >> T;
    for (ret=0; ret<n && T>=0; ++ret) {
        cin >> a;
        T -= a;
    }

    if (T<0) --ret;
    cout << ret << endl;

    return 0;
}
