#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

#define NMAX 101
int arr[NMAX];
int cnt[NMAX];
set<int> s;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int tt;
    cin >> tt;
    while (tt--) {
        int n, k, d, ret;
        cin >> n >> k >> d;
        s.clear();
        for (int i=0; i<n; ++i) cin >> arr[i];
        for (int i=0; i<n; ++i) cnt[i] = 0;

        for (int i=0; i<d; ++i) ++cnt[arr[i]], s.insert(arr[i]);
        ret = s.size();
        for (int i=d; i<n; ++i) {
            if (--cnt[arr[i-d]] == 0) s.erase(s.find(arr[i-d]));
            ++cnt[arr[i]], s.insert(arr[i]);
            ret = min<int>(ret, s.size());
        }
        cout << ret << '\n';
    }

    return 0;
}
