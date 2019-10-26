#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    long long A, B;
    cin >> A >> B;
    if (A > B) swap(A,B);
    if (A < 0) A = -A;
    else A -= 1;

    long long ret = 0;
    if (B&1) ret += (B+1LL)/2LL * B;
    else ret += B/2LL * (B+1LL);

    if (A&1) ret -= (A+1LL)/2LL * A;
    else ret -= A/2LL * (A+1LL);

    cout << ret << '\n';

    return 0;
}
