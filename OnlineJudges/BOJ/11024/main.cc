#include <iostream>
#include <sstream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    string s;
    stringstream ss;

    int T;
    cin >> T;
    getline(cin,s);
    while (T--) {
        int a, ret = 0;
        std::getline(cin, s);
        stringstream ss(s);
        while (ss >> a) ret += a;
        cout << ret << '\n';
    }

    return 0;
}
