#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    
    int n, m, ret;
    cin >> n >> m;
    ret = m;
    while (n--) {
        int a, b;
        cin >> a >> b;
        m += a-b;
        if (m < 0) {
            ret = m;
            break;
        }
        else if (ret < m) ret = m;
    }

    cout << (ret < 0 ? 0 : ret) << endl;

    return 0;
}
