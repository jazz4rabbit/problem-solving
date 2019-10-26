#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N;
    cin >> N;
    cout << N*(N+1)/2*(N+2) << endl;

    return 0;
}
