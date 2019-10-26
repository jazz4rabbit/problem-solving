#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int tt;
    cin >> tt;
    for (int i=1; i<=tt; ++i) {
        int a, b;
        cin >> a >> b;
        cout << "Case " << i << ": " << a+b << '\n';
    }

    return 0;
}
