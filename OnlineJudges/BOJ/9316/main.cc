#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N;
    cin >> N;
    for (int i=1; i<=N; ++i)
        cout << "Hello World, Judge " << i << "!\n";

    return 0;
}
