#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int A, B, C, X, Y, ret;
    cin >> A >> B >> C >> X >> Y;
    C*=2;
    
    if (C<=A && C<=B) ret = max(X,Y)*C;
    else if (C<=A) ret = X*C + max(0,Y-X)*B;
    else if (C<=B) ret = max(0,X-Y)*A + Y*C;
    else if (C<=A+B) {
        if (X > Y) swap(X,Y), swap(A,B);
        ret = X*C + (Y-X)*B;
    }
    else ret = X*A + Y*B;

    cout << ret << endl;

    return 0;
}
