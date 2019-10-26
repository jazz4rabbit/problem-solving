#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    
    int c, s;
    c = s = 100;
    while (n--) {
        int ci, si;
        cin >> ci >> si;
        if (ci > si) s -= ci;
        else if (ci < si) c -= si;
    }

    cout << c << '\n' << s << '\n';

    return 0;
}
