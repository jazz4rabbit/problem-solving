#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N;
    cin >> N;

    int l = (1 << N)+1;
    cout << l*l << endl;

    return 0;
}
