#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, ret = 0;
    cin >> N;
    while (N--) {
        int arr[3], money;
        for (int i=0; i<3; ++i) cin >> arr[i];
        sort(arr, arr+3);

        if (arr[0] != arr[1] && arr[1] != arr[2]) money = 100*arr[2];
        else if (arr[0] == arr[1] && arr[0] == arr[2]) money = 10000+1000*arr[0];
        else money = 1000 + arr[1]*100;
        if (ret < money) ret = money;
    }

    cout << ret << endl;

    return 0;
}
