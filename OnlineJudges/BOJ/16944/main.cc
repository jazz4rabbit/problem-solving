#include <iostream>
#include <string>
using namespace std;

int N, v[4], ret;
string pw;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N >> pw;
    for (int i=0; i<N; ++i) {
        if (pw[i] >= 'a' && pw[i] <= 'z') v[0] = 1;
        else if (pw[i] >= 'A' && pw[i] <= 'Z') v[1] = 1;
        else if (pw[i] >= '0' && pw[i] <= '9') v[2] = 1;
        else v[3] = 1;
    }

    for (int i=0; i<4; ++i) {
        if (v[i] == 0) ++ret;
    }

    cout << (ret+N < 6 ? 6-N : ret) << endl;

    return 0;
}
