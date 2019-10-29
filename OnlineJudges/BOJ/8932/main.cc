#include <iostream>
#include <cmath>
using namespace std;

int T, s;
double board[7][4] = {
    { 9.23076, 26.7, 1.835, 0 },
    { 1.84523, 75, 1.348, 1 },
    { 56.0211, 1.5, 1.05, 1 },
    { 4.99087, 42.5, 1.81, 0},
    { 0.188807, 210, 1.41, 1},
    { 15.9803, 3.8, 1.04, 1},
    { 0.11193, 254, 1.88, 0}
};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    while (T--) {
        int ret = 0;
        for (int i=0; i<7; ++i) {
            cin >> s;
            if (board[i][3] == 0)
                ret += floor(board[i][0]*pow(board[i][1] - s, board[i][2]));
            else 
                ret += floor(board[i][0]*pow(s - board[i][1], board[i][2]));
        }
        cout << ret << '\n';
    }
    return 0;
}
