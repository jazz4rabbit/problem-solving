#include <iostream>
using namespace std;

#define MOD 14579

int a, b, ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> a >> b;
    ret = 1;
    for (int i=a; i<=b; ++i) {
        ret *= i*(i+1)/2;
        if (ret >= MOD) ret %= MOD;
    }

    cout << ret << endl;

    return 0;
}
