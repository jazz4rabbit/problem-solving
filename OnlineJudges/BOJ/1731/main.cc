#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N, a, b, c, an;
    cin >> N;
    cin >> a >> b >> c;

    an = c;
    for (int i=3; i<N; ++i) cin >> an;

    if (a+c == b*2) an += b-a;
    else an *= b/a;

    cout << an << endl;

    return 0;
}
