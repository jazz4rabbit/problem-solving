#include <iostream>
#include <string>
using namespace std;

string s;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    while (getline(cin, s)) cout << s << '\n';

    return 0;
}
