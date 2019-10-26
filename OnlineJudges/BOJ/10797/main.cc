#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int n, ret=0;
    cin >> n;
    for (int i=0; i<5; ++i) {
        int c;
        cin >> c;
        if (c == n) ++ret;
    }

    cout << ret << endl;

    return 0;
}
