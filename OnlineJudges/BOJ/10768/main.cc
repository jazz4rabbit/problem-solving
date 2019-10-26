#include <iostream>
#include <string>
using namespace std;

int m, d;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> m >> d;
    string ret;
    if (m > 2) ret = "After";
    else if (m < 2) ret = "Before";
    else if (d == 18) ret = "Special";
    else ret = d < 18 ? "Before" : "After";

    cout << ret << endl;

    return 0;
}
