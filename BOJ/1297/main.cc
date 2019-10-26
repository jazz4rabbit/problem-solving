#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    
    double D, rY, rX;
    cin >> D >> rY >> rX;

    double rDD = rX*rX + rY*rY;
    double YY = D*D * rY*rY / rDD;
    double XX = D*D * rX*rX / rDD;

    cout << (int)sqrt(YY) << endl;
    cout << (int)sqrt(XX) << endl;

    return 0;
}
