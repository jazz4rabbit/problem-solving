#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N;
    cin >> N;
    cout << (N & 1 ? "CY" : "SK") << '\n';
    return 0;
}
