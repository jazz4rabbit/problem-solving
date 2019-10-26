#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int y, k, Y, K;
        Y = K = 0;
        for (int i=0; i<9; ++i) {
            cin >> y >> k;
            Y += y, K += k;
        }

        if (Y > K) cout << "Yonsei";
        else if (Y < K) cout << "Korea";
        else cout << "Draw";
        cout << endl;
    }

    return 0;
}
