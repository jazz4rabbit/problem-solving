#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int ret = 0, num;
    for (int i=0; i<5; ++i) {
        cin >> num;
        ret += num;
    }
    cout << ret << '\n';

    return 0;
}
