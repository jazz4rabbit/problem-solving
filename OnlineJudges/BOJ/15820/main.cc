#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int S1, S2;
    cin >> S1 >> S2;

    int r1, r2;
    r1 = r2 = 0;
    while (S1--) {
        int a, b;
        cin >> a >> b;
        if (a != b) r1 = -1;
    }

    while (S2--) {
        int a, b;
        cin >> a >> b;
        if (a != b) {
            r2 = -1;
            break;
        }
    }

    if (r1 == 0 && r2 == 0) cout << "Accepted" << endl;
    else if (r1 == -1) cout << "Wrong Answer" << endl;
    else cout << "Why Wrong!!!" << endl;

    return 0;
}
