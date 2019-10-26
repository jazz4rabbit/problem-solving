#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A, B, C, D, P;
    cin >> A >> B >> C >> D >> P;

    cout << min(P*A, B+max(0,P-C)*D) << endl;

    return 0;
}
