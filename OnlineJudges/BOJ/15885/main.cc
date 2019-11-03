#include <iostream>
#include <cmath>
using namespace std;

double a, b;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> a >> b;
    cout << floor(abs(1 - a/b)*2) << endl;

    return 0;
}
