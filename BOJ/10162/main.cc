#include <iostream>
using namespace std;

void solution(int T) {
    if (T % 10) {
        cout << "-1" << endl;
        return;
    }

    int A, B, C;
    A = T / 300, T %= 300;
    B = T / 60, T %= 60;
    C = T / 10, T %= 10;
    cout << A << ' ' << B << ' ' << C << endl;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T;
    cin >> T;
    solution(T);

    return 0;
}
