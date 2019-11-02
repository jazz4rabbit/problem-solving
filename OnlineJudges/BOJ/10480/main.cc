#include <iostream>
using namespace std;

int tt, x;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> tt;
    while (tt--) {
        cin >> x;
        cout << x << " is " << (x%2 == 0 ? "even" : "odd") << '\n';
    }

    return 0;
}
