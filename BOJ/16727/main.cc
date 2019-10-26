#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string answer[3] = {"Persepolis", "Esteghlal", "Penalty"};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int p1, s1, s2, p2;
    int ret;
    cin >> p1 >> s1 >> s2 >> p2;

    int sp = p1+p2, ss = s1+s2;
    if (sp == ss) {
        if (s1 == p2) ret = 2;
        else ret = s1 > p2;
    }
    else ret = sp < ss;

    cout << answer[ret] << endl;

    return 0;
}
