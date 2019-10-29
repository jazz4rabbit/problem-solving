#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A, B;
    cin >> A >> B;

    cout << A / B;
    A %= B;
    if (A!=0) cout << '.';
    for (int i=0; i<1000 && A!=0; ++i) {
        A*=10;
        cout << A/B;
        A%=B;
    }

    cout << endl;

    return 0;
}
