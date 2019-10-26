#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int A, B, C;
    cin >> A >> B >> C;

    cout << max(abs(A-B), abs(B-C)) - 1 << endl;

    return 0;
}
