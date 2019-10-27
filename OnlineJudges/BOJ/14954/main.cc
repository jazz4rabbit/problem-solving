#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<int> history;

int f(int x)
{
    int ret = 0;
    while (x != 0) {
        int x0 = x%10;
        ret += x0*x0;
        x/=10;
    }

    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int n;
    cin >> n;

    while (n != 1 && history.find(n) == history.end()) {
        history.insert(n);
        n = f(n);
    }
    cout << (n == 1 ? "HAPPY" : "UNHAPPY") << endl;

    return 0;
}
