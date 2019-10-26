#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int K, N, acc=0;
    cin >> K >> N;
    K--;

    while (N--) {
        int i;
        string Z;
        cin >> i >> Z;
        acc += i;
        if (acc >= 210) break;
        if (Z == "T") K = (K+1) % 8;
    }

    cout << K%8+1 << endl;

    return 0;
}
