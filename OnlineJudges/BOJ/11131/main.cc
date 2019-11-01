#include <iostream>
using namespace std;

int T, N, W, ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        ret = 0;
        cin >> N;
        while (N--) cin >> W, ret += W;
        if (ret == 0) cout << "Equilibrium";
        else cout << (ret<0 ? "Left" : "Right");
        cout << '\n';
    }

    return 0;
}
