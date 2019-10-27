#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int board[4] = {-2, 0, 0, -1};
int pos[4] = {0, 1, 2, 3};

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    string s;
    cin >> s;

    for (int i=0; i<(int)s.size(); ++i) {
        if (s[i] == 'A') swap(board[0], board[1]);
        else if (s[i] == 'B') swap(board[0], board[2]);
        else if (s[i] == 'C') swap(board[0], board[3]);
        else if (s[i] == 'D') swap(board[1], board[2]);
        else if (s[i] == 'E') swap(board[1], board[3]);
        else swap(board[2], board[3]);
    }

    sort(pos, pos+4, [](int i, int j) { return board[i]<board[j];});

    cout << pos[0]+1 << '\n' << pos[1]+1 << endl;

    return 0;
}
