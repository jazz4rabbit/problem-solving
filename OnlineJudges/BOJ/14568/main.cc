#include <iostream>
using namespace std;

int N;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N;

    int ret=0;
    for (int A=2; A<=N-4; A+=2) {
        for (int B=1; B<N-A; ++B) {
            for (int C=B+2; C<=N-A-B; ++C) {
                if (A+B+C == N) {
                    ++ret;
                }
            }
        }
    }
    cout << ret << endl;

    return 0;
}
