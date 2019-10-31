#include <iostream>
using namespace std;

int p[10] = {1, 1, 4, 4, 2, 1, 1, 4, 4, 2};
int r[10][7] = {
    {10},
    {1},
    {2, 4, 8, 6},
    {3, 9, 7, 1},
    {4, 6},
    {5},
    {6},
    {7, 9, 3, 1},
    {8, 4, 2, 6},
    {9, 1}
};

int T, a, b;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> a >> b;
        a%=10;
        cout << r[a][(b-1)%p[a]] << '\n';
    }

    return 0;
}
