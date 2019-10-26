#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    double X, Y, N;
    double ret;
    cin >> X >> Y >> N;
    ret = X/Y;
    while (N--) {
        cin >> X >> Y;
        ret = min(ret, X/Y);
    }

    cout << ret*1000 << endl;

    return 0;
}
