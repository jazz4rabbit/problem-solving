#include <iostream>
#include <string>
using namespace std;

string answer[5] = {"D", "C", "B", "A", "E"};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        cout << answer[a+b+c+d] << '\n';
    }


    return 0;
}
