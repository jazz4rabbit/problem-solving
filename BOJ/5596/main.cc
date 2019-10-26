#include <iostream>
#include <algorithm>
using namespace std;

int A, B, s;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    for (int i=0; i<4; ++i) cin >> s, A += s;
    for (int i=0; i<4; ++i) cin >> s, B += s;

    cout << max(A, B) << endl;

    return 0;
}
