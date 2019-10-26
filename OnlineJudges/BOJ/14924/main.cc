#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int S, T, D;
    cin >> S >> T >> D;
    cout << (D/S/2) * T << endl;

    return 0;
}
