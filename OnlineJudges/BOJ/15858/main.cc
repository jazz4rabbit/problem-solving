#include <iostream>
#include <iomanip>
using namespace std;

long long a, b, c;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    
    cin >> a >> b >> c;
    a*=b;
    cout << a / c << '.';
    a %= c;
    for (int i=0; i<6; ++i) {
        a *= 10;
        cout << a / c;
        a %= c;
    }
    cout << endl;

    return 0;
}
