#include <iostream>
#include <cstring>
using namespace std;

#define LENMAX 82
int tt, M;
char buf[LENMAX];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> tt;
    for (int tc=1; tc<=tt; ++tc) {
        cin >> M >> buf;

        cout << tc << ' ';
        for (int i=0; i<M-1; ++i) cout << buf[i];
        for (int i=M; i<(int)strlen(buf); ++i) cout << buf[i];
        cout << '\n';
    }

    return 0;
}
