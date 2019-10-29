#include <iostream>
#include <string>
using namespace std;

int A, B;
string s;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (true) {
        cin >> A >> s >> B;
        if (A+B == 0 && s == "W") break;
        if (s == "W") {
            if (A-B >= -200) cout << A-B;
            else cout << "Not allowed";
        }
        else cout << A+B;
        cout << '\n';
    }

    return 0;
}
