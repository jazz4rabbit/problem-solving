#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);


    int tt=0, a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 0) break;
        cout << "Triangle #" << ++tt << '\n';
        if (c == -1) cout << "c = " << fixed << setprecision(3) << sqrt(a*a + b*b) << '\n';
        else if (a == -1) {
            int tmp = c*c - b*b;
            if (tmp <= 0) cout << "Impossible." << '\n';
            else cout << "a = " << fixed << setprecision(3) << sqrt(tmp) << '\n';
        }
        else {
            int tmp = c*c - a*a;
            if (tmp <= 0) cout << "Impossible." << '\n';
            else cout << "b = " << fixed << setprecision(3) << sqrt(tmp) << '\n';
        }
        cout << '\n';
    }

    return 0;
}
