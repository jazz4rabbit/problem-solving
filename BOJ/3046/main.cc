#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int R1, S;
    cin >> R1 >> S;
    cout << (S<<1) - R1 << '\n';
    return 0;
}
