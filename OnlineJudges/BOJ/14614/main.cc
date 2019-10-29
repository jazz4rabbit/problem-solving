#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A, B;
    string C;
    cin >> A >> B >> C;

    if ((C[C.size()-1]-'0')%2 == 1) A ^= B;
    cout << A << endl;

    return 0;
}
