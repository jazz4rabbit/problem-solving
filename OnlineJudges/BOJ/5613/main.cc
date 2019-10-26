#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int a, b;
    string op;
    cin >> a;

    while (true) {
        cin >> op;
        if (op == "=") break;
        cin >> b;
        if (op == "+") a += b;
        else if (op == "-") a -= b;
        else if (op == "*") a *= b;
        else a/=b;
    }

    cout << a << endl;

    return 0;
}
