#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    string s0 = "가";
    string s1;
    cin >> s1;

    int result = 0;
    for (int i=0; i<(int)s0.size(); ++i) {
        result *= 64;
        result += s1[i] - s0[i];
    }
    cout << result+1 << endl;

    return 0;
}
