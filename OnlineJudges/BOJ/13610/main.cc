#include <iostream>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int X, Y;
    cin >> X >> Y;
    int dt = Y-X;
    cout << X / dt + 1 + (X%dt==0 ? 0 : 1) << endl;

    return 0;
}
