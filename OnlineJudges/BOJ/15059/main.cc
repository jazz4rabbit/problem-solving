#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int ca, ba, pa, cr, br, pr;
    cin >> ca >> ba >> pa >> cr >> br >> pr;

    cout << max(cr-ca,0) + max(br-ba,0) + max(pr-pa,0) << endl;

    return 0;
}
