#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N, W, H;
    cin >> N >> W >> H;

    int mx = W*W+H*H;

    while (N--) {
        int l;
        cin >> l;
        if (l*l <= mx) cout << "DA";
        else cout << "NE";
        cout << '\n';
    }

    return 0;
}
