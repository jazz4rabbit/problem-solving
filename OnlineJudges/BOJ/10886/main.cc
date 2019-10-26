#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N, acc=0, a;
    cin >> N;
    for (int i=0; i<N; ++i)
        cin >> a, acc += a;

    if (2*acc > N) cout << "Junhee is cute!\n";
    else cout << "Junhee is not cute!\n";

    return 0;
}
