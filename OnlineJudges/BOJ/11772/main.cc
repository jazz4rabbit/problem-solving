#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, ret=0;
    cin >> N;
    while (N--) {
        int n,p, np=1;
        cin >> n;
        p = n%10, n/=10;
        for (int i=0; i<p; ++i) np*=n;
        ret += np;
    }
    cout << ret << endl;

    return 0;
}
