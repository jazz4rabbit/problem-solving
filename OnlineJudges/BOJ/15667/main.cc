#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, i=1;
    cin >> N;
    N-=1;
    for (i=1; i<N && !(N%i == 0 && i*(i+1) == N); ++i);
    cout << i << endl;

    return 0;
}
