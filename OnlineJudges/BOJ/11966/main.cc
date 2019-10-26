#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N;
    cin >> N;

    N -= N & -N;
    cout << (N == 0 ? 1 : 0) << endl;

    return 0;
}
