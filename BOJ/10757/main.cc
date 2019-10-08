#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define DMAX (int)1e5
vector<int> A, B;
char buf[DMAX+2];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    A.reserve(DMAX+1), B.reserve(DMAX+1);
    A.push_back(0);
    B.push_back(0);
    cin >> buf;
    for (int i=0; i<(int)strlen(buf); ++i) {
        A.push_back(buf[i]-'0');
    }
    cin >> buf;
    for (int i=0; i<(int)strlen(buf); ++i) {
        B.push_back(buf[i]-'0');
    }

    if (A.size() < B.size()) swap(A,B);
    int d = A.size() - B.size();
    for (int i=1; i<(int) B.size(); ++i)
        A[i+d] += B[i];
    for (int i=A.size(); i>=0; --i) {
        if (A[i] >= 10) {
            A[i-1] += A[i]/10;
            A[i] %= 10;
        }
    }

    if (A[0] != 0) cout << A[0];
    for (int i=1; i<(int)A.size(); ++i)
        cout << A[i];
    cout << '\n';

    return 0;
}
