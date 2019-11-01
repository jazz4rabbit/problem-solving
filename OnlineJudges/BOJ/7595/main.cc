#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (true) {
        int sz;
        cin >> sz;
        if (sz == 0) break;
        for (int i=1; i<=sz; ++i) {
            for (int j=0; j<i; ++j) cout << '*';
            cout << '\n';
        }
    }

    return 0;
}
