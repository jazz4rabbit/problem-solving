#include <iostream>
using namespace std;

int L, P;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> L >> P;
    int LP = L*P;
    for (int i=0; i<5; ++i) {
        int num;
        cin >> num;
        cout << num - LP << ' ';
    }
    cout << '\n';

    return 0;
}
