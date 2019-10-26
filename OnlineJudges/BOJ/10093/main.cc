#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    long long A, B;
    cin >> A >> B;
    if (A > B) swap(A,B);

    if (A >= B-1) {
        cout << 0 << endl;
    }
    else {
        cout << B-A-1 << '\n';
        for (long long i=A+1; i<B; ++i)
            cout << i << ' ';
        cout << endl;
    }

    return 0;
}
