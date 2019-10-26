#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int v = 0;
    for (int i=0; i<5; ++i) {
        int num;
        cin >> num;
        v += num*num;
    }
    cout << v%10 << '\n';

    return 0;
}
