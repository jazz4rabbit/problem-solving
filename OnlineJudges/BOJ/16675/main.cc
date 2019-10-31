#include <iostream>
#include <map>
#include <vector>
using namespace std;

#define vs vector<string>

map<vs, int> judge = {
    { {"R", "R"}, 0 },
    { {"R", "S"}, -1},
    { {"R", "P"}, 1 },

    { {"S", "R"}, 1 },
    { {"S", "S"}, 0},
    { {"S", "P"}, -1 },

    { {"P", "R"}, -1 },
    { {"P", "S"}, 1},
    { {"P", "P"}, 0 },
};

string m[2], t[2], ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    for (int i=0; i<2; ++i) cin >> m[i];
    for (int i=0; i<2; ++i) cin >> t[i];

    if (m[0] == m[1] || t[0] == t[1]) {
        if (m[0] == m[1] && t[0] == t[1]) {
            if (judge[{m[0],t[0]}] == 0) ret = "?";
            else if (judge[{m[0],t[0]}] == 1) ret = "TK";
            else ret = "MS";
        }
        else if (m[0] == m[1]) {
            if (judge[{m[0], t[0]}] == 1 || judge[{m[0], t[1]}] == 1)
                ret = "TK";
            else ret = "?";
        }
        else {
            if (judge[{m[0], t[0]}] == -1 || judge[{m[1], t[1]}] == -1)
                ret = "MS";
            else ret = "?";
        }
    }
    else ret = "?";

    cout << ret << endl;

    return 0;
}
