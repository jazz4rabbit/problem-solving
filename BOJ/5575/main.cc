#include <iostream>
using namespace std;

int h[3], m[3], s[3];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N = 3;
    while (N--) {
        for (int i=0; i<2; ++i)
            cin >> h[i] >> m[i] >> s[i];

        s[2] = s[1] - s[0];
        if (s[2] < 0) s[2] += 60, m[1] -= 1;
        m[2] = m[1] - m[0];
        if (m[2] < 0) m[2] += 60, h[1] -= 1;
        h[2] = h[1] - h[0];

        cout << h[2] << ' ' << m[2] << ' ' << s[2] << endl;
    }

    return 0;
}
