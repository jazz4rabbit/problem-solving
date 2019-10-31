#include <iostream>
#include <string>
using namespace std;

int X, N;
string ret;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> X >> N;

    if (N==1) ret = X<0 ? "INFINITE" : to_string(0);
    else if (N%2 == 1) ret = "ERROR";
    else if (N==0) ret = X>0 ? "INFINITE" : to_string(0);
    else ret = X>0 ? to_string((X-1)/(N/2)) : to_string(0);

    cout << ret << endl;

    return 0;
}
