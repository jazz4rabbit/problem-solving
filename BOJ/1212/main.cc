#include <iostream>
using namespace std;

string fo2b[8] = {"0", "1", "10", "11", "100", "101", "110", "111"};
string o2b[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    char c;
    cin >> c;
    cout << fo2b[c-'0'];
    while (cin >> c) cout << o2b[c-'0'];
    cout << endl;

    return 0;
}
