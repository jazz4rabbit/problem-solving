#include <iostream>
using namespace std;

int T, A, B;
char delim;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> A >> delim >> B;

        cout << A+B << '\n';
    }

    return 0;
}
