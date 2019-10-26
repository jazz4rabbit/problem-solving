#include <iostream>
#include <algorithm>
using namespace std;

#define MMAX 2000

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int mh = MMAX;
    int md = MMAX;
    for (int i=0; i<3; ++i) {
        int h;
        cin >> h;
        mh = min(mh, h);
    }
    for (int i=0; i<2; ++i) {
        int d;
        cin >> d;
        md = min(md, d);
    }

    cout << mh+md-50 << endl;

    return 0;
}
