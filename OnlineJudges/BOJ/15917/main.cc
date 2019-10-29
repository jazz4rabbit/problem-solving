#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int Q, a;
    cin >> Q;
    while (Q--) {
        cin >> a;
        cout << (a == (a & -a) ? 1 : 0) << '\n';
    }

    return 0;
}
