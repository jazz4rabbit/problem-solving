#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int a, b, ret;
    cin >> a >> b;
    ret = abs((a-1)%4 - (b-1)%4) + abs((a-1)/4 - (b-1)/4);
    cout << ret << endl;

    return 0;
}
