#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    string s;
    int A, B;
    cin >> A >> B;

    if (A < B) s = "<";
    else if (A == B) s = "==";
    else s = ">";

    cout << s << endl;

    return 0;
}
