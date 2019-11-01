#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (true) {
        int ic;
        cin >> ic;
        if (ic == 0) break;
        if (ic <= 1000000) {}
        else if (ic <= 5000000) ic *= 0.9;
        else ic *= 0.8;

        cout << ic << '\n';
    }

    return 0;
}
