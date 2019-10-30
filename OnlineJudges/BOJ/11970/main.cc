#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false), cin.tie(NULL);

    int a, b, c, d, ret;
    cin >> a >> b >> c >> d;

    if (a <= c && c <= b) ret = max(b,d)-a;
    else if (a <= d && d <= b) ret = b-min(a,c);
    else if (c <= a && b <= d) ret = d-c;
    else ret = b-a+d-c;

    cout << ret << endl;

    return 0;
}
