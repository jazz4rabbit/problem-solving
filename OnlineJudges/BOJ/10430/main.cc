#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int A, B, C;
    cin >> A >> B >> C;
    cout << (A+B)%C << '\n'
        << (A+B)%C << '\n'
        << (A*B)%C << '\n'
        << (A*B)%C << '\n';
    return 0;
}
