#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> a;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    string s;
    cin >> s;
    a.resize(s.size()+4);
    for (int i=(int)s.size()-1; i>=0; --i) {
        if (s[i] == '1') {
            int j = s.size()-1-i;
            ++a[j], ++a[j+4];
        }
    }

    a.push_back(0);
    for (int i=0, carry=0; i<(int)a.size() || carry; ++i) {
        a[i] += carry;
        carry = a[i] > 1;
        if (carry) a[i] -= 2;
    }

    if (a.back() == 0) a.pop_back();

    for (int i=a.size()-1; i>=0; --i)
        cout << a[i];
    cout << endl;

    return 0;
}
