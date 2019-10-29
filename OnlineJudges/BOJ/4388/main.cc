#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int a, b;
    while (cin >> a >> b) {
        if (a+b == 0) break;
        int ret = 0;
        if (a > b) swap(a,b);
        a+=b;
        while (a != 0) {
            if (a%10 < b%10) ++ret;
            a/=10, b/=10;
        }
        cout << ret << '\n';
    }
        
    return 0;
}
