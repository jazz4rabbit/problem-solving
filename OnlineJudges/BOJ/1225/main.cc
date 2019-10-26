#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    string A, B;
    cin >> A >> B;

    int a, b;
    a = b = 0;
    for (int i=0; i<(int)A.size(); ++i) a += A[i] - '0';
    for (int i=0; i<(int)B.size(); ++i) b += B[i] - '0';
    cout << (long long)a*b << endl;

    return 0;
}
