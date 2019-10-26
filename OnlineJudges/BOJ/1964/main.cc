#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    // an = n (3n+5)/2 + 1
    long long N;
    cin >> N;
    cout << (N*(3*N+5)/2 + 1) % 45678 << endl;
    return 0;
}
