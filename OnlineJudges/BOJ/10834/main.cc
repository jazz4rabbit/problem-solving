#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a%b);
}

int main(void)
{
    ios::sync_with_stdio(false);
    
    int M;
    cin >> M;

    --M;
    long long a, b;
    int t;
    cin >> a >> b >> t;
    while (M--) {
        long long ai, bi;
        int ti;
        cin >> ai >> bi >> ti;
        t += ti;
        long long g = gcd(b, ai);
        b = (b/g)*(ai/g)*bi;
    }

    cout << t%2 << ' ' << b/a << endl;

    return 0;
}
