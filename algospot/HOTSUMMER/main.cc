#include <iostream>
#include <iomanip>
#include <cstring>
#include <map>
using namespace std;

int tt, W;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> tt;
    while (tt--) {
        cin >> W;
        int acc =0;
        bool chk = true;
        for (int i=0; i<9; ++i) {
            int ai; cin >> ai;
            acc += ai;
            if (acc > W) chk = false;
        }
        cout << (chk ? "YES" : "NO") << '\n';
    }

    return 0;
}
