#include <iostream>
using namespace std;

int N, a, b, c;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N;
    while (N--) {
        cin >> a >> b >> c;
        int d = a+b+c;
        cout << a << ' ' << b << ' ' << c << ' ' << (d==180 ? "Seems OK" : "Check") << '\n';
    }

    return 0;
}
