#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    string l, op, r;
    cin >> l >> op >> r;
    if (op == "*") {
        cout << 1;
        for (int i=0; i<(int)(l.size() + r.size())-2; ++i)
            cout << 0;
        cout << '\n';
    }
    else {
        int mx, mn;
        mx = max(l.size(), r.size());
        mn = min(l.size(), r.size());

        if (mx == mn) {
            cout << 2;
            for (int i=0; i<(int)l.size()-1; ++i)
                cout << 0;
            cout << '\n';
        }
        else {
            cout << 1;
            for (int i=0; i<mx-mn-1; ++i) cout << 0;
            cout << 1;
            for (int i=0; i<mn-1; ++i) cout << 0;
            cout << '\n';
        }
    }
    return 0;
}
