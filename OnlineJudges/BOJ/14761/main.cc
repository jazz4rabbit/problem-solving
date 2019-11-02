#include <iostream>
using namespace std;

int X, Y, N;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    
    cin >> X >> Y >> N;
    for (int i=1; i<=N; ++i) {
        int x = i%X;
        int y = i%Y;
        if (x != 0 && y != 0) cout << i;
        if (x == 0) cout << "Fizz";
        if (y == 0) cout << "Buzz";
        cout << '\n';
    }

    return 0;
}
