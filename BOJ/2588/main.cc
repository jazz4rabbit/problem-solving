#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A, B, ret[4];
    cin >> A >> B;

    ret[3] = A*B;
    for (int i=0; i<3; ++i)  {
        ret[i] = A * (B % 10);
        B /= 10;
    }

    for (int i=0; i<4; ++i)
        cout << ret[i] << '\n';

    return 0;
}
