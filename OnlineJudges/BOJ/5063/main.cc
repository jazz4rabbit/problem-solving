#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N;
    cin >> N;
    while (N--) {
        int r, e, c;
        cin >> r >> e >> c;
        e -= c;
        if (e == r) cout << "does not matter\n";
        else if (e > r) cout << "advertise\n";
        else cout << "do not advertise\n";
    }

    return 0;
}
