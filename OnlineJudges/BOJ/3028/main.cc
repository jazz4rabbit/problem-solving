#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int pos[3] = {1};
    string s;
    cin >> s;

    for (int i=0; i<(int)s.size(); ++i) {
        if (s[i] == 'A') swap(pos[0], pos[1]);
        else if (s[i] == 'B') swap(pos[1], pos[2]);
        else swap(pos[0], pos[2]);
    }

    int idx=0;
    while (!pos[idx]) ++idx;

    cout << idx + 1 << endl;

    return 0;
}
