#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int n, l[3];
    cin >> n;
    for (int i=1; i<=n; ++i) {
        for (int j=0; j<3; ++j) cin >> l[j];
        sort(l, l+3);

        cout << "Scenario #" << i << ":\n";
        cout << (l[0]*l[0] + l[1]*l[1] == l[2]*l[2] ? "yes" : "no") << "\n\n";
    }

    return 0;
}
