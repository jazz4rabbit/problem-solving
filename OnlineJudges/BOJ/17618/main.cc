#include <iostream>
using namespace std;

int N, ret;

bool chk(int a)
{
    int ac = a, d=0;
    while (ac > 0) {
        d += ac%10;
        ac/=10;
    }
    return a%d == 0;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N;
    for (int i=1; i<=N; ++i) {
        if (chk(i)) ++ret;
    }
    cout << ret << endl;

    return 0;
}
