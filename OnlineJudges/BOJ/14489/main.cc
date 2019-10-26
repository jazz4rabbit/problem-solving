#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int A, B, C;
    cin >> A >> B >> C;

    A+=B;
    A -= 2*C;
    if (A<0) A += 2*C;
    cout << A << endl;

    return 0;
}
