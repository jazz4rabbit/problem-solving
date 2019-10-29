#include <iostream>
using namespace std;

int N;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    bool ret=true;
    cin >> N;
    for (int i=2; i<N; ++i) {
        if (N%i == 0) {
            ret = false;
            break;
        }
    }

    cout << (ret ? "Yes" : "No") << endl;

    return 0;
}
