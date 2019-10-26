#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (true) {
        int M, F;
        cin >> M >> F;
        M += F;
        if (M == 0) break;
        cout << M << '\n';
    }

    return 0;
}
