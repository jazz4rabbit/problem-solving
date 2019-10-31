#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string s;
unordered_map<char, int> on2n = {
    {'-',  0},
    {'\\', 1},
    {'(',  2},
    {'@',  3},
    {'?',  4},
    {'>',  5},
    {'&',  6},
    {'%',  7},
    {'/',  -1},
};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (cin >> s) {
        if (s == "#") break;
        int ret = 0;
        for (int i=0; i<(int)s.size(); ++i) {
            ret *= 8;
            ret += on2n[s[i]];
        }
        cout << ret << '\n';
    }

    return 0;
}
