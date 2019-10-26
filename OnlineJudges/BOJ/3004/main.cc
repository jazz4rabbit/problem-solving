#include <iostream>
using namespace std;

int N;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> N;
    int a = N/2;
    int b = N-a;
    cout << 1+a*b+N << endl;

    return 0;
}
