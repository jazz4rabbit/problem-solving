#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    cout << max(0, L - max(A / C + (A % C == 0 ? 0 : 1), B / D + (B % D == 0 ? 0 : 1))) << endl;

    return 0;
}
