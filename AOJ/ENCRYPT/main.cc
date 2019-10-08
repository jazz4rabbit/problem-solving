#include <iostream>
#include <cstring>
using namespace std;

#define LENMAX 102
int tt;
char buf[LENMAX], ret[LENMAX];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> tt;
    while (tt--) {
        cin >> buf;
        int len = strlen(buf);
        int hlen = len / 2;
        int dlen = len % 2 == 1 ? 1 : 0;
        for (int i=0; i<len; i+=2) {
            ret[i/2] = buf[i];
            ret[i/2+hlen+dlen] = buf[i+1];
        }
        ret[len] = '\0';
        cout << ret << '\n';
    }

    return 0;
}
