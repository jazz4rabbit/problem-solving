#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N;
    cin >> N;

    for (int i=0; i<N; ++i) {
        for (int j=i+1; j<N; ++j) cout << ' ';
        for (int j=0; j<=i; ++j) cout << "*";
        cout << '\n';
    }

    return 0;
}
