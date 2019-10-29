#include <iostream>
using namespace std;

int T, A, B;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> A >> B;
        long long tmp = A/B;
        cout << tmp*tmp << '\n';
    }
    
    return 0;
}
