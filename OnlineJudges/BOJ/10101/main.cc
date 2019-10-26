#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    string s;
    int A, B, C;
    cin >> A >> B >> C;

    if (A+B+C != 180) s = "Error";
    else if (A == 60 && B == 60 && C == 60) s = "Equilateral";
    else if (A == B || A == C || B == C) s = "Isosceles";
    else s = "Scalene";

    cout << s << endl;

    return 0;
}
