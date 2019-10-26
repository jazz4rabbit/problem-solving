#include <iostream>
#include <iomanip>
using namespace std;

int tt;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> tt;
    while (tt--) {
        double price;
        cin >> price;
        cout << fixed << setprecision(2) << '$' << price*0.8 << '\n';
    }
    return 0;
}
