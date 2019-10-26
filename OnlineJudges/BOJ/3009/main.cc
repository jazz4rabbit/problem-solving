#include <iostream>
using namespace std;

int X[4], Y[4], rX, rY;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    for (int i=0; i<3; ++i)
        cin >> X[i] >> Y[i];

    if (X[0] != X[1] && X[0] != X[2]) rX = X[0];
    else rX = X[0] == X[1] ? X[2] : X[1];
    if (Y[0] != Y[1] && Y[0] != Y[2]) rY = Y[0];
    else rY = Y[0] == Y[1] ? Y[2] : Y[1];

    cout << rX << ' ' << rY << endl;

    return 0;
}
