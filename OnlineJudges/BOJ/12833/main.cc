#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;
    if ((C & 1) == 1) A ^=B;
    cout << A << endl;

    return 0;
}
