#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int a, b;
    while (true) {
        cin >> a >> b;
        if ((a|b) == 0) break;
        if (a <= b) cout << "No";
        else cout << "Yes";
        cout << '\n';
    }

    return 0;
}
