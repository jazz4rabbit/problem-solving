#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N;
    cin >> N;

    // j = i -1
    long long bi, bj;
    cin >> bj;
    cout << bj << ' ';
    for (int i=2; i<=N; ++i) {
        cin >> bi;
        cout << bi * i - bj * (i-1) << ' ';
        bj = bi;
    }
    cout << endl;


    return 0;
}
