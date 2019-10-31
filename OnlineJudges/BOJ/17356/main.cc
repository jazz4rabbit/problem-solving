#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int A, B;

int main(void) {
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> A >> B;
    double M = (B-A)/400.0;
    cout << fixed << setprecision(4) << 1.0 / (1.0 + pow(10.0, M)) << endl;

    return 0;
}
