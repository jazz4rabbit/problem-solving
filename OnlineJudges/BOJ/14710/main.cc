#include <iostream>
using namespace std;

int t1, t2;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    // dt1 : dt2 = 1 : 12
    cin >> t1 >> t2;
    cout << (t1*12%360 == t2 ? "O" : "X") << endl;

    return 0;
}
