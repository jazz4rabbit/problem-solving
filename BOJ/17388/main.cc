#include <iostream>
#include <string>
using namespace std;

string answer[4] = {"Soongsil", "Korea", "Hanyang", "OK"};

int main(void)
{
    int s, acc, m, midx;
    cin >> s;
    acc = m = s, midx = 0;
    for (int i=1; i<3; ++i) {
        cin >> s;
        acc += s;
        if (m > s) m = s, midx = i;
    }

    if (acc >= 100) midx = 3;
    cout << answer[midx] << endl;

    return 0;
}
