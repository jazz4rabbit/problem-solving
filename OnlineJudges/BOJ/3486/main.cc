#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N;
string sa, sb;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N;
    while (N--) {
        cin >> sa >> sb;
        if (sa.size() > sb.size()) swap(sa,sb);

        vector<int> a, b;
        for (int i=0; i<(int)sa.size(); ++i) a.push_back(sa[i]-'0');
        for (int i=0; i<(int)sb.size(); ++i) b.push_back(sb[i]-'0');


        b.push_back(0);
        for (int i=0, carry=0; i<(int)a.size() || carry; ++i) {
            b[i] += carry + (i<(int)a.size() ? a[i] : 0);
            carry = b[i] >= 10;
            if (carry) b[i] -= 10;
        }

        while (!b.empty() && b.back() == 0) b.pop_back();
        int i=0;
        while (b[i] == 0) ++i;
        for (; i<(int)b.size(); ++i) cout << b[i];
        cout << '\n';
    }

    return 0;
}
