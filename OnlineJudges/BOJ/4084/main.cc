#include <iostream>
#include <cmath>
using namespace std;

long long dfs(int a, int b, int c, int d, int ret)
{
    if (a == 0 && b == 0 && c == 0 && d == 0) return ret-1;
    return dfs(abs(a-b), abs(b-c), abs(c-d), abs(d-a), ret+1LL);
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int a, b, c, d;
    while (true) {
        cin >> a >> b >> c >> d;
        if (a+b+c+d == 0) break;
        cout << dfs(a,b,c,d,0) << endl;
    }

    return 0;
}
