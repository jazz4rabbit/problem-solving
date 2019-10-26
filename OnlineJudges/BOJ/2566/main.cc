#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int a, y, x, nx = 0;
    for (int i=1; i<=9; ++i) {
        for (int j=1; j<=9; ++j) {
            cin >> a;
            if (a > nx) {
                nx = a;
                y = i;
                x = j;
            }
        }
    }
    cout << nx << '\n' << y << ' ' << x << '\n';
    return 0;
}
