#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    string A, B;
    cin >> A >> B;

    for (int i=A.size()-1; i>=0; --i) {
        if (A[i] != B[i]) {
            if (A[i] < B[i]) swap(A,B);
            break;
        }
    }

    for (int i=A.size()-1; i>=0; --i)
        cout << A[i];
    cout << '\n';

    return 0;
}
