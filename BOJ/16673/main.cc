#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int C, K, P;
    cin >> C >> K >> P;

    // K * (C*(C+1))/2 + P * C*(C+1)(2C+1)/6
    cout << K*C*(C+1)/2 + P*C*(C+1)/2*(2*C+1)/3 << endl;

    return 0;
}
