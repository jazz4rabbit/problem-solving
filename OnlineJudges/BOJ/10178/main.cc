#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int tt;
    cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b;
        cout << "You get " << a/b << " piece(s) and your dad gets " << a%b << " piece(s).\n";
    }

    return 0;
}
