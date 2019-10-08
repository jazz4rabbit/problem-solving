#include <iostream>
using namespace std;

long long A, B;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> A >> B;
    cout << A*A - B*B << '\n';

    return 0;
}
