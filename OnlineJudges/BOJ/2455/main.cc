#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int acc, ret;
    acc = ret = 0;
    for (int i=0; i<4; ++i) {
        int a, b;
        cin >> a >> b;
        acc += b - a;
        if (acc > ret) ret = acc;
    }

    cout << ret << endl;

    return 0;
}
