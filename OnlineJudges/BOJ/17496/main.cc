#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int N, T, C, P;
    cin >> N >> T >> C >> P;
    cout << ((N-1)/T) * C * P << endl;

    return 0;
}
