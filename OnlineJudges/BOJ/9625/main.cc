#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int K;
    cin >> K;

    int A=1, B=0;
    while (K--) {
        int tmp = A;
        A = B;
        B += tmp;
    }

    cout << A << ' ' << B << endl;

    return 0;
}
