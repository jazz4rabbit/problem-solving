#include <iostream>
using namespace std;

int idx, c[4] = {0, 500, 800, 1000};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int ret = 5000;
    while (cin >> idx) ret -= c[idx];
    cout << ret << endl;

    return 0;
}
