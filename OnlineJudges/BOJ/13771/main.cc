#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int N;
double mn, smn, a;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N >> mn >> smn;
    ----N;
    if (smn < mn) swap(mn, smn);
    while (N--) {
        cin >> a;
        if (a < mn) smn = mn, mn = a;
        else if (a < smn) smn = a;
    }

    cout << fixed << setprecision(2) << smn << endl;

    return 0;
}
