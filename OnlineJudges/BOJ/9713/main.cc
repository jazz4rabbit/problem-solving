#include <iostream>
using namespace std;

int T, N;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> N;
        if ((N & 1) == 0) --N;
        int tmp = N/2 + 1;
        cout << tmp*tmp << '\n';
    }

    return 0;
}
