#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int A, ai;
    cin >> A;
    for (int i=0; i<9; ++i) cin >> ai, A-= ai;

    cout << A << endl;

    return 0;
}
