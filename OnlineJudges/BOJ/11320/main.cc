#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T, A, B;
    cin >> T;
    while (T--) {
        cin >> A >> B;
        int tmp = A/B;
        cout << tmp*tmp << '\n';
    }

    return 0;
}
