#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0) break;
        cout << a/b << ' ' << a%b << " / " << b << '\n';
    }

    return 0;
}
