#include <iostream>
using namespace std;

int t, ti;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    for (int i=0; i<4; ++i) {
        cin >> ti;
        t += ti;
    }
    cout << t/60 << '\n' << t%60 << '\n';

    return 0;
}
