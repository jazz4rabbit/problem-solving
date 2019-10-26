#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N, ret=0;
    cin >> N;
    while (N--) {
        int a;
        cin >> a;
        ret += a-1;
    }

    cout << ret + 1 << endl;

    return 0;
}
