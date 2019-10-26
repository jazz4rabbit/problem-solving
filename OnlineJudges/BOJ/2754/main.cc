#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string sj[] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D+", "D0", "D-", "F"};
double pj[] = {4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    string s;

    int i=0;
    for (cin >> s; s!=sj[i]; ++i);
    cout << fixed << setprecision(1) << pj[i] << endl;

    return 0;
}
