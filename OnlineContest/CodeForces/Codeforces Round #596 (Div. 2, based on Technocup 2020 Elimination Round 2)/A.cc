#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A, B;
    cin >> A >> B;

    if (A == B) cout << A << 0 << ' ' << B << 1 << endl;
    else if (A + 1 == B) cout << A << ' '<< B << endl;
    else if (A == 9 && B == 1) cout << "9 10" << endl;
    else cout << -1 << endl;


    return 0;
}
