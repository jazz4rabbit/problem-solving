#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int acc=0, mn=100;
        for (int i=0; i<7; ++i) {
            int a;
            cin >> a;
            if (!(a & 1))  {
                acc += a;
                if (mn > a) mn = a;
            }
        }
        cout << acc << ' ' << mn << '\n';
    }

    return 0;
}
