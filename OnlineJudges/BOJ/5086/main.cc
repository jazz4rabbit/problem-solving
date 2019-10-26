#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (true) {
        string s;
        int a, b;
        cin >> a >> b;

        if (a+b == 0) break;

        if (a > b && a%b == 0) s = "multiple";
        else if (a < b && b%a == 0) s = "factor";
        else s = "neither";

        cout << s << endl;
    }

    return 0;
}
