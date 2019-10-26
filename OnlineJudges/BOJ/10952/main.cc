#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A, B;
    while (true) {
        cin >> A >> B;
        A += B;
        if (A == 0) break;
        cout << A << '\n';
    }

    return 0;
}
