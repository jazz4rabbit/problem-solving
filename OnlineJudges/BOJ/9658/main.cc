#include <iostream>
using namespace std;

#define NMAX 1001
int A[NMAX] = {0, 0, 1, 0, 1};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N;
    cin >> N;
    for (int i=5; i<=N; ++i) {
        if (A[i-1] + A[i-3] + A[i-4] < 3) A[i] = 1;
        else A[i] = 0;
    }

    cout << (A[N] == 1 ? "SK" : "CY") << endl;

    return 0;
}
