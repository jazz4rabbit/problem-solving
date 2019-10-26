#include <iostream>
#include <iomanip>
using namespace std;

long long p[5] = {35034, 23090, 19055, 12530, 18090};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long ret = 0;
        for (int i=0; i<5; ++i) {
            long long n;
            cin >> n;
            ret += n*p[i];
        }

        cout << "$" << ret/100 << '.' << setw(2) << setfill('0') << ret%100 << '\n';
    }


    return 0;
}
