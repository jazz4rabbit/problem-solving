#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int t, n, p1, p2;
    string s1, s2;
    cin >> t;
    while (t--) {
        cin >> n;
        p1 = p2 = 0;
        while (n--) {
            cin >> s1 >> s2;
            if (s1 == s2) continue;
            else if (s1 == "R") {
                if (s2 == "S") ++p1;
                else ++p2;
            }
            else if (s1 == "S") {
                if (s2 == "P") ++p1;
                else ++p2;
            }
            else {
            if (s2 == "R") ++p1;
            else ++p2;
            }
        }

        if (p1 > p2) cout << "Player 1";
        else if (p1 == p2) cout << "TIE";
        else cout << "Player 2";
        cout << '\n';
    }

    return 0;
}
