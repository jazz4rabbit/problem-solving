#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int s = 0, score;
    for (int i=0; i<5; ++i) {
        cin >> score;
        s += score < 40 ? 40 : score;
    }

    cout << s / 5 << endl;

    return 0;
}
