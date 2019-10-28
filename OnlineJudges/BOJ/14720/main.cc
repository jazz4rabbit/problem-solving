#include <iostream>
using namespace std;

int N, ni, c=0, ret=0;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N;
    while (N--) {
        cin >> ni;
        if (ni == c) ++c, ++ret;
        if (c > 2) c = 0;
    }

    cout << ret << endl;

    return 0;
}
