#include <iostream>
using namespace std;

int A[1001] = {0, 1, 0, 1, 1};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N;
    cin >> N;
    for (int i=5; i<=N; ++i) {
        if (A[i-1] + A[i-3] + A[i-4] == 3) A[i] = 0;
        else A[i] = 1;
    }

    cout << (A[N] == 1 ? "SK" : "CY") << endl;

    return 0;
}
