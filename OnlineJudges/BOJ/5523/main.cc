#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, A, B;
    cin >> N;
    A = B = 0;
    while (N--) {
        int Ai, Bi;
        cin >> Ai >> Bi;
        if (Ai > Bi) ++A;
        else if (Ai < Bi) ++B;
    }

    cout << A << ' ' << B << '\n';

    return 0;
}
