#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int arr[3];
    for (int i=0; i<3; ++i) cin >> arr[i];
    sort(arr,arr+3);

    for (int i=0; i<3; ++i) cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}