#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int LENMAX = 1002;
int tt, pos[LENMAX/2];
char buf[LENMAX];

bool cmp(int i, int j)
{
    if (buf[i] == buf[j]) return buf[i+1] < buf[j+1];
    else return buf[i] < buf[j];
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> tt;
    while (tt--) {
        cin >> buf;
        int len = strlen(buf)/2;
        for (int i=0; i<len; ++i) pos[i] = i*2;
        sort(pos, pos+len, cmp);
        for (int i=0; i<len; ++i)
            cout << buf[pos[i]] << buf[pos[i]+1];
        cout << '\n';
    }

    return 0;
}
