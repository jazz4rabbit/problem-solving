#include <iostream>
using namespace std;

int A[7] = {0, 5000000, 3000000, 2000000, 500000, 300000, 100000};
int B[5] = {5120000, 2560000, 1280000, 640000, 320000};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int T, a, b, acc, ret;
    cin >> T;
    while (T--) {
        ret = acc = 0;
        cin >> a >> b;
        for (int i=0; i<=6; ++i) {
            acc += i;
            if (a <= acc) {
                ret += A[i];
                break;
            }
        }
        acc = 0;
        if (b != 0) {
            for (int i=0; i<=4; ++i) {
                acc += 1<<i;
                if (b <= acc) {
                    ret += B[i];
                    break;
                }
            }
        }

        cout << ret << endl;
    }

    return 0;
}
