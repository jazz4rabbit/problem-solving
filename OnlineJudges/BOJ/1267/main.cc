#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N;
    long long a, b;
    a = b = 0;
    cin >> N;
    while (N--) {
        long long c;
        cin >> c;
        c+=1;
        a += c/30 + (c%30 == 0 ? 0 : 1);
        b += c/60 + (c%60 == 0 ? 0 : 1);
    }
    a *= 10, b *= 15;

    if (a < b) cout << "Y " << a;
    else if (a > b) cout << "M " << b;
    else cout << "Y M " << a;
    cout << '\n';

    return 0;
}
