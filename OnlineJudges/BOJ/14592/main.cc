#include <iostream>
using namespace std;

struct info {
    int S, C, L;
    bool operator<(const info& rhs) {
        if (S == rhs.S) {
            if (C == rhs.C) return L > rhs.L;
            else return C > rhs.C;
        }
        else return S < rhs.S;
    }
    
    friend istream& operator>>(istream& is, info& v) {
        is >> v.S >> v.C >> v.L;
        return is;
    }
};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, ret=1;
    info v, mx;
    cin >> N >> mx;

    for (int i=2; i<=N; ++i) {
        cin >> v;
        if (mx < v) mx = v, ret = i;
    }
    cout << ret << endl;

    return 0;
}
