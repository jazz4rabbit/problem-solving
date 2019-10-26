#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    n /= 3;
    int q = n / 3;
    cout << (q*n - 3*q*(q+1)/2)*3 + (n % 3 ? 0 : 1) << endl;

    return 0;
}
