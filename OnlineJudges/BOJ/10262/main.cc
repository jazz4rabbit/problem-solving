#include <iostream>
using namespace std;

int p, a;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    for (int i=0; i<4; ++i) cin >> a, p += a;
    for (int i=0; i<4; ++i) cin >> a, p -= a;

    if (p == 0) cout << "Tie";
    else cout << (p < 0 ? "Emma" : "Gunnar");
    cout << endl;

    return 0;
}
