#include <iostream>
using namespace std;

int N, X, ni;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> N >> X;
    for (int i=0; i<N; ++i) {
        cin >> ni;
        if (ni < X) cout << ni << ' ';
    }

    cout << '\n';
    return 0;
}
