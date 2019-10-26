#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    double A1, P1, R1, P2;
    cin >> A1 >> P1 >> R1 >> P2;

    if (A1 / P1 < R1*R1*3.141592 / P2)
        cout << "Whole pizza" << endl;
    else cout << "Slice of pizza" << endl;

    return 0;
}
