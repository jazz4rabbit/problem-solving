#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    // (1-g^2)**0.5
    double ta, tb;
    while (true) {
        cin >> ta >> tb;
        if (ta + tb == 0) break;
        ta*=ta, tb*=tb;
        tb /= ta;
        cout << fixed << setprecision(3) << sqrt((1-tb)) << '\n';
    }

    return 0;
}
