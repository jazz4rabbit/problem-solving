#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    double H, P;
    while (cin >> H >> P) {
        cout << fixed << setprecision(2) << H/P << '\n';
    }

    return 0;
}
