#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    cout << (n*(n+1))/2 << '\n';
    return 0;
}
