#include <iostream>
#include <cmath>
using namespace std;

int T;

int main(void) {
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    int tmp = T*T;
    cout << tmp/4 + (tmp%4 >= 2 ? 1 : 0) << endl;

    return 0;
}
