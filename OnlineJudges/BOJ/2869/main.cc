#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int A, B, V;
    cin >> A >> B >> V;

    V -= A;
    A -= B;
    cout << V/A + 1 + (V % A == 0 ? 0 : 1) << endl;

    return 0;
}
