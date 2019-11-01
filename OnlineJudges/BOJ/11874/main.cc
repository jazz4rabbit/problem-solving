#include <iostream>
using namespace std;

int L, D, X, N, M;

int sum_digits(int a)
{
    int l = a/10;
    if (l == 0) return a%10;
    else return sum_digits(l) + a%10;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> L >> D >> X;
    for (int i=L; i<=D; ++i) {
        if (sum_digits(i) == X) {
            N = i;
            break;
        }
    }
    for (int i=D; i>=L; --i) {
        if (sum_digits(i) == X) {
            M = i;
            break;
        }
    }

    cout << N << '\n' << M << '\n';

    return 0;
}
