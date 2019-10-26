#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

#define tiii tuple<int,int,int>
tiii board[3];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N;
    cin >> N;
    while (N--) {
        for (int i=0; i<3; ++i) {
            int c;
            cin >> c;
            get<0>(board[i]) += c;
            if (c == 3) ++(get<1>(board[i])) ;
            else if (c == 2) ++(get<2>(board[i]));
        }
    }

    int idx = 0;
    for (int i=1; i<3; ++i) {
        if (board[i] > board[idx]) idx = i;
    }

    bool chk = false;
    for (int i=0; i<3; ++i) {
        if (i == idx) continue;
        if (board[i] == board[idx]) {
            chk = true;
            break;
        }
    }

    cout << (chk ? 0 : idx+1) << ' ' << get<0>(board[idx]) << endl;

    return 0;
}
