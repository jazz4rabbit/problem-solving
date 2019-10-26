#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.14159265358979323846 // pi

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int R;
    cin >> R;

    cout << fixed << setprecision(6) << R*R*PI << '\n' << 2*R*R << '\n';

    return 0;
}
