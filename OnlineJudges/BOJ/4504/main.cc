#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n, a;
    cin >> n;
    while (true) {
        cin >> a;
        if (a == 0) break;
        cout << a;
        if (a % n) cout << " is NOT";
        else cout << " is";
        cout << " a multiple of " << n << ".\n";
    }
    return 0;
}
