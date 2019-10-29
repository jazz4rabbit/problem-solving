#include <iostream>
using namespace std;

long long solve(long long n, long long m)
{
    if (m < 0) return -solve(-m, -n);
    else if (n < 0) return solve(0,m)-solve(0, -n);
    else return m*(m+1)/2 - (n-1)*n/2;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int tt, n, m;
    cin >> tt;
    for (int i=1; i<=tt; ++i) {
        cin >> n >> m;
        cout << "Scenario #" << i << ":\n";
        cout << solve(n,m) << "\n\n";
    }

    return 0;
}
