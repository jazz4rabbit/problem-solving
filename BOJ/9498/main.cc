#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int score;
    string s;
    cin >> score;
    if (score >= 90) s = "A";
    else if (score >= 80) s = "B";
    else if (score >= 70) s = "C";
    else if (score >= 60) s = "D";
    else s = "F";

    cout << s << endl;

    return 0;
}
