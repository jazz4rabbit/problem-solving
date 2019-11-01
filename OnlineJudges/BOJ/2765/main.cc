#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//#define _USE_MATH_DEFINES
double R, torch, t;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int i=0;
    while (cin >> R >> torch >> t) {
        double d = R*M_PI / 63360*torch;
        if (torch == 0) continue;
        cout << "Trip #" << ++i << ": " << fixed << setprecision(2)
             << d << ' ' << d / t*3600 << '\n';
    }

    return 0;
}
