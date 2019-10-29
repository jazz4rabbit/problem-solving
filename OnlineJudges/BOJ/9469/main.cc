#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int P, N;
    double D, A, B, F;
    cin >> P;
    while (P--) {
        cin >> N >> D >> A >> B >> F;
        cout << N << ' ' << fixed << setprecision(2) << F*D/(A+B) << '\n';
    }

    return 0;
}
