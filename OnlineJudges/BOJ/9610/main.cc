#include <iostream>
#include <string>
using namespace std;

string label[5] = {"Q1", "Q2", "Q3", "Q4", "AXIS"};
int answer[5];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int tt;
    cin >> tt;
    while (tt--) {
        int x, y, idx;
        cin >> x >> y;
        if (x == 0 || y == 0) idx = 4;
        else if (x>0 && y>0) idx = 0;
        else if (x<0 && y>0) idx = 1;
        else if (x<0 && y<0) idx = 2;
        else idx = 3;
        ++answer[idx];
    }

    for (int i=0; i<5; ++i) {
        cout << label[i] << ": " << answer[i] << '\n';
    }

    return 0;
}
