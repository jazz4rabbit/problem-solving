#include <iostream>
using namespace std;

int R, C;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> R >> C;
    for (int i=0; i<R; ++i) {
        for (int j=0; j<C; ++j) cout << '*';
        cout << '\n';
    }

    return 0;
}
