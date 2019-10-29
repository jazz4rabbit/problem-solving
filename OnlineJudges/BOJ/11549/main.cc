#include <iostream>
using namespace std;

int T, a, ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> T;
    for (int i=0; i<5; ++i) {
        cin >> a;
        if (a == T) ++ret;
    }
    cout << ret << endl;

    return 0;
}
