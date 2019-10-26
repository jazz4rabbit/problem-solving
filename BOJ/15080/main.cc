#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    string seq;
    int h[2], m[2], s[2];
    for (int i=0; i<2; ++i)
        cin >> h[i] >> seq >> m[i] >> seq >> s[i];

    int ret = 0;
    ret += (h[1]-h[0])*3600;
    ret += (m[1]-m[0])*60;
    ret += (s[1]-s[0]);
    ret += ret < 0 ? 24*3600 : 0;
    cout << ret << endl;

    return 0;
}
