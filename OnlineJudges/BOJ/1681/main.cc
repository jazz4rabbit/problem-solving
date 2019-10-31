#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, L, cnt, s, e;
    cin >> N >> L;

    e = cnt = 0;
    s = 1;
    while (cnt < N) {
        e = s+N-cnt;
        for (int i=s; i<e; ++i) {
            int tmp = i;
            bool chk = false;
            while (tmp>0) {
                if (tmp%10 == L) chk = true;
                tmp /= 10;
                if (chk) break;
            }
            if (chk) continue;
            ++cnt;
        }
        s = e;
    }

    cout << e-1 << endl;

    return 0;
}
