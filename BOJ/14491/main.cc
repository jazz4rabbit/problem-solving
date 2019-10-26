#include <iostream>
#include <vector>
using namespace std;

int T;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    vector<int> a;
    cin >> T;
    while (T) {
        a.push_back(T % 9);
        T /= 9;
    }

    for (int i=a.size()-1; i>=0; --i)
        cout << a[i];
    cout << endl;

    return 0;
}
