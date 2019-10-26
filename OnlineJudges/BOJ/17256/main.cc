#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int ax, ay, az, cx, cy, cz;
    cin >> ax >> ay >> az >> cx >> cy >> cz;
    cout << cx-az << ' ' << cy/ay << ' ' << cz-ax << endl;
    return 0;
}
