#include <iostream>
#include <string>
using namespace std;

int T, X, Y, Z;
string op, eq;

int calc(int X, int Y, string op)
{
    if (op == "+") return X+Y;
    else return X-Y;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    for (int tc=1; tc<=T; ++tc) {
        cout << "Case " << tc << ": ";
        cin >> X >> op >> Y >> eq >> Z;
        cout << (calc(X,Y,op) == Z ? "YES" : "NO") << '\n';
    }

    return 0;
}
