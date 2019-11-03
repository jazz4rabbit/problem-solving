#include <iostream>
#include <algorithm>
using namespace std;

#define NMAX 1000
int N, K, A[NMAX], ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N >> K;
    for (int i=0; i<N; ++i) cin >> A[i];
    sort(A, A+N);
    int i=0, j=N-1;
    while (i<j) {
        int tmp = A[i]+A[j];
        if (tmp == K) ++i, --j, ++ret;
        else if (tmp > K) --j;
        else ++i;
    }
    cout << ret << endl;

    return 0;
}
