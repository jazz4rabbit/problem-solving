#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string nick[2][7] = {
    { "", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh" },
    { "", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh" }
};
int T, a, b;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    for (int i=1; i<=T; ++i) {
        cout << "Case " << i << ": ";
        cin >> a >> b;
        if (a > b) swap(a,b);
        if (a == b) cout << nick[1][b];
        else if (a == 5 && b == 6) cout << "Sheesh Beesh";
        else cout << nick[0][b] << ' ' << nick[0][a];
        cout << '\n';
    }

    return 0;
}
