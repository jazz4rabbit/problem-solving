#include <iostream>
#include <string>
using namespace std;

string sa, sb, op;
bool a, b;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> sa >> op >> sb;
    a = sa == "true" ? true : false;
    b = sb == "true" ? true : false;

    if (op == "AND") a = a && b;
    else a = a || b;

    cout << (a ? "true" : "false") << endl;

    return 0;
}
