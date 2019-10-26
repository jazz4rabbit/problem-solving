#include <iostream>
using namespace std;

int mn, acc, s;

int main(void)
{
    mn = 100;
    for (int i=0; i<4; ++i) {
        cin >> s;
        acc += s;
        mn = min(mn, s);
    }
    acc -= mn, mn = 100;
    for (int i=0; i<2; ++i) {
        cin >> s;
        acc += s;
        mn = min(mn, s);
    }
    acc -= mn;

    cout << acc << endl;

    return 0;
}
