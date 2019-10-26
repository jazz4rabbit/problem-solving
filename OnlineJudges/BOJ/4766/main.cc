#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    double a, b;
    cin >> a;
    while (true) {
        cin >> b;
        if (b == 999) break;
        cout << fixed << setprecision(2) << b-a << '\n';
        a = b;
    }
    return 0;
}
