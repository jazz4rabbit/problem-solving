#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    long long a;
    cin >> a;
    cout << fixed << setprecision(6) << sqrt(a)*4 << endl;
    return 0;
}
