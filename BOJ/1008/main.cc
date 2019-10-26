#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    double A, B;
    cin >> A >> B;
    cout << std::setprecision(10) << A/B << endl;

    return 0;
}
