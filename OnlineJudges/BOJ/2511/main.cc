#include <iostream>
#include <string>
using namespace std;

string answer[3] = {"D", "A", "B"};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A[10], B[10];
    for (int i=0; i<10; ++i) cin >> A[i];
    for (int i=0; i<10; ++i) cin >> B[i];

    int a, b, d=0;
    a = b = 0;
    for (int i=0; i<10; ++i) {
        if (A[i] == B[i]) ++a, ++b;
        else if (A[i] > B[i]) a+=3, d=1;
        else b+=3, d=2;
    }

    cout << a << ' ' << b << '\n';
    if (a > b) d = 1;
    else if (a < b) d = 2;
    cout << answer[d] << '\n';

    return 0;
}
