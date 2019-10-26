#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a%b);
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n, a;
    cin >> n >> a;
    int g = a;
    while (--n) {
        cin >> a;
        g = gcd(g, a);
    }

    vector<int> r;
    int i=1;
    for (; i<sqrt(g); ++i) {
        if (g%i == 0) {
            cout << i << '\n';
            r.push_back(g/i);
        }
    }

    if (i*i == g) cout << i << '\n';

    while (!r.empty())
        cout << r.back() << '\n', r.pop_back();

    return 0;
}
