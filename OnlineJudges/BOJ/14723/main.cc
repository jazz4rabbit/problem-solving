#include <iostream>
using namespace std;

int N;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N;

    int n = 1;
    while (n*(n+1)/2 < N) ++n;
    int m = N - n*(n-1)/2;
    cout << n-m+1 << ' ' << m << endl;

    return 0;
}
