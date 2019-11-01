#include <iostream>
#include <cmath>
using namespace std;

double B, N;

int main(void) {
    ios::sync_with_stdio(false), cin.tie(NULL);

    while (true) {
        cin >> B >> N;
        if (B + N == 0) break;
        double tmp = pow(B, 1/N);
        double l = abs(B - pow(floor(tmp), N));
        double r = abs(B - pow(ceil(tmp), N));
        cout << (l < r ? (int)floor(tmp) : (int)ceil(tmp)) << '\n';
    }

    return 0;
}
