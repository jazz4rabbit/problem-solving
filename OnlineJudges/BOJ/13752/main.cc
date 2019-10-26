#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int n, k;
    cin >> n;
    while (n--) {
        cin >> k;
        while (k--) cout << '=';
        cout << '\n';
    }
    return 0;
}
