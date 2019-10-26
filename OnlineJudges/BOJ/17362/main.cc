#include <iostream>
using namespace std;

int n;
int answer[8] = {2, 1, 2, 3, 4, 5, 4, 3};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> n;
    cout << answer[n%8] << endl;

    return 0;
}
