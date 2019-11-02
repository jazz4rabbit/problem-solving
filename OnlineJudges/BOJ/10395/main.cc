#include <iostream>
using namespace std;

int arr[5], a;
char ret[2] = "Y";

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    for (int i=0; i<5; ++i) cin >> arr[i];
    for (int i=0; i<5; ++i) {
        cin >> a;
        if (arr[i] + a != 1) {
            ret[0] = 'N';
            break;
        }
    }

    cout << ret << endl;

    return 0;
}
