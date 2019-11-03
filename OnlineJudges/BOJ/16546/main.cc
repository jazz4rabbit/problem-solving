#include <iostream>
using namespace std;

int N, a, ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N;
    for (int i=0; i<N-1; ++i) {
        cin >> a;
        ret += a;
    }
    cout << - (ret - N*(N+1)/2) << endl;

    return 0;
}
