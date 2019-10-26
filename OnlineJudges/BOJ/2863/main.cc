#include <iostream>
using namespace std;

double M[4];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> M[0] >> M[1] >> M[3] >> M[2];

    int idx = 0;
    double ret = M[idx]/M[idx+2] + M[idx+1]/M[idx+3];
    for (int i=1; i<4; ++i) {
        auto tmp = M[i]/M[(i+2)%4] + M[(i+1)%4]/M[(i+3)%4];
        if (ret < tmp)
            ret = tmp, idx = i;
    }
    
    cout << (idx == 0 ? 0 : 4 - idx) << endl;

    return 0;
}
