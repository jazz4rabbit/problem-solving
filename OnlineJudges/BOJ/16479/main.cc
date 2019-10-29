#include <iostream>
#include <iomanip>
using namespace std;

double K, D1, D2;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    
    cin >> K >> D1 >> D2;
    double tmp = (D1-D2)/2;
    cout << fixed << setprecision(6)<< K*K - tmp*tmp << endl;

    return 0;
}
