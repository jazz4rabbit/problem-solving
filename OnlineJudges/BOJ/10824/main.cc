#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    long long A, B, C, D, ret;
    cin >> A >> B >> C >> D;

    long long tmp = 1;
    while (tmp <= B) tmp *= 10;
    ret = A*tmp+B;

    tmp = 1;
    while (tmp <= D) tmp *= 10;
    ret += C*tmp+D;

    cout << ret << endl;

    return 0;
}
