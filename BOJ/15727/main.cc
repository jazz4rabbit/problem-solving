#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int L;
    cin >> L;
    cout << L/5 + (L%5 ? 1 : 0)<< endl;
    return 0;
}
