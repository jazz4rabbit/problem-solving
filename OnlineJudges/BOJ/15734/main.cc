#include <iostream>
#include <algorithm>
using namespace std;

int L, R, A, ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> L >> R >> A;
    if (L > R) swap(L,R);
    ret += L<<1;
    R -= L;
    ret += min(R,A)<<1;
    A -= R;
    if (A > 0) ret += A & 1 ? A-1 : A;

    cout << ret << endl;

    return 0;
}
