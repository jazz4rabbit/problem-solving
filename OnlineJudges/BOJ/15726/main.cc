#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double A, B, C;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> A >> B >> C;
    double ret = A/B*C;
    ret = max(ret, A*B/C);
    cout << (int)ret << endl;

    return 0;
}
