#include <iostream>
#include <algorithm>
using namespace std;

int N, S[3][4], s[3], a, b, g;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    S[0][1] = S[1][2] = S[2][3] = 1;

    cin >> N;
    while (N--) {
        cin >> a >> b >> g;
        for (int i=0; i<3; ++i) swap(S[i][a], S[i][b]);
        for (int i=0; i<3; ++i)
            if (S[i][g] == 1) ++s[i];
    }

    int ret = s[0];
    for (int i=1; i<3; ++i)
        if (ret < s[i]) ret = s[i];
    cout << ret << endl;

    return 0;
}
