#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;

    int result = C-B <= 0 ? -1 : A / (C-B) + 1;
    cout << result << endl;

    return 0;
}
