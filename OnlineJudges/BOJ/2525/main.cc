#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;

    B += C;
    A += B/60;
    B %= 60;
    A %= 24;

    cout << A << ' ' << B << endl;

    return 0;
}
