#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N, ret=0;
    cin >> N;
    while (N--) {
        int A, B;
        cin >> A >> B;
        ret += B % A;
    }

    cout << ret << endl;

    return 0;
}
