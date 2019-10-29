#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a[3], ret[2];
string op[2];

int calc(int a, int b, string op)
{
    if (op == "+") a+=b;
    else if (op == "-") a-=b;
    else if (op == "*") a*=b;
    else a/=b;
    return a;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> a[0];
    for (int i=0; i<2; ++i)
        cin >> op[i] >> a[i+1];

    ret[0] = calc(calc(a[0], a[1], op[0]), a[2], op[1]);
    ret[1] = calc(a[0], calc(a[1], a[2], op[1]), op[0]);

    if (ret[0] > ret[1]) swap(ret[0], ret[1]);
    cout << ret[0] << '\n' << ret[1] << '\n';

    return 0;
}
