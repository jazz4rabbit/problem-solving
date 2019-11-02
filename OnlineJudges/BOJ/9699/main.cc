#include <iostream>
#include <algorithm>
using namespace std;

int tt, arr[5];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> tt;
    for (int tc=1; tc<=tt; ++tc) {
        for (int i=0; i<5; ++i) cin >> arr[i];
        sort(arr, arr+5);
        cout << "Case #" << tc << ": " << arr[4] << '\n';
    }

    return 0;
}
