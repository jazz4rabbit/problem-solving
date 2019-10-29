#include <iostream>
using namespace std;

int N, P;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (true) {
        cin >> N >> P;
        if (N == 0) break;
        if (P <= N/2) {
            if (P%2 == 0) cout << P-1 << ' ' << N-P+1 << ' '<< N-P+2;
            else cout << P+1 << ' ' << N-P << ' ' << N-P+1;
            cout << '\n';
        }
        else {
            if (P%2 == 1) cout << N-P << ' ' << N-P+1 << ' '<< P+1;
            else cout << N-P+1 << ' ' << N-P+2 << ' ' << P-1;
            cout << '\n';
        }
    }

    return 0;
}
