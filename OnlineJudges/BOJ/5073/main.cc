#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    string ret;
    int L[3];

    while (true) {
        for (int i=0; i<3; ++i) cin >> L[i];
        if (L[0] + L[1] + L[2] == 0) break;
        sort(L, L+3);
        if (L[0] + L[1] <= L[2]) ret = "Invalid";
        else if (L[0] == L[2]) ret = "Equilateral";
        else if (L[0] != L[1] && L[1] != L[2]) ret = "Scalene";
        else ret = "Isosceles";

        cout << ret << '\n';
    }

    return 0;
}
