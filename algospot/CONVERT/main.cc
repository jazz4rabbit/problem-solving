#include <iostream>
#include <iomanip>
#include <cstring>
#include <map>
using namespace std;

int tt;
double v;
char buf[3];

map<string, string> convertType;
map<string, double> convertValue;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    convertType["kg"] = "lb", convertValue["kg"] = 2.2046;
    convertType["lb"] = "kg", convertValue["lb"] = 0.4536;
    convertType["g"] = "l", convertValue["g"] = 3.7854;
    convertType["l"] = "g", convertValue["l"] = 0.2642;

    cin >> tt;
    for (int tc=1; tc<=tt; ++tc) {
        cin >> v >> buf;
        cout << tc << " " << setprecision(4) << fixed;
        cout << v * convertValue[buf] << ' '
            << convertType[buf] << '\n';
    }

    return 0;
}
