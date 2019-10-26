#include <iostream>
using namespace std;

#define PMAX 6
int pi, p[PMAX] = { 1, 1, 2, 2, 2, 8 };

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    for (int i=0; i<PMAX; ++i) {
        cin >> pi;
        cout << p[i]-pi << ' ';
    }
    cout << '\n';

    return 0;
}
