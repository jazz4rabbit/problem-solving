#include <iostream>
#include <algorithm>
using namespace std;

int solution(int a)
{
    if (a < 10) return a;
    int ret = 0;
    for (int i=10; a!=0; i*=10) {
        ret += a % 10;
        a /= 10;
    }
    return solution(ret);
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    string N;
    while (true) {
        cin >> N;
        if (N == "0") break;
        int acc = 0;
        for (int i=0; i<(int)N.size(); ++i)
            acc += N[i] - '0';

        cout << solution(acc) << '\n';
    }

    return 0;
}
