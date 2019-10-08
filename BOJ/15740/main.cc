#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

#define BS (int)1e5+3
char buf[BS];
vector<int> A, B;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> buf;
    A.push_back(buf[0] == '-' ? -1 : 1);
    for (int i=strlen(buf)-1; i>0; --i) A.push_back(buf[i] - '0');
    if (buf[0] != '-') A.push_back(buf[0] - '0');

    cin >> buf;
    B.push_back(buf[0] == '-' ? -1 : 1);
    for (int i=strlen(buf)-1; i>0; --i) B.push_back(buf[i] - '0');
    if (buf[0] != '-') B.push_back(buf[0] - '0');

    if (A.size() < B.size()) swap(A,B);

    if (A[0] == B[0]) {
        A.push_back(0);
        for (int i=1; i<(int)B.size(); ++i) {
            A[i] += B[i];
            if (A[i] >= 10) ++A[i+1], A[i] -= 10;
        }
        for (int i=B.size(); i<(int)A.size(); ++i)
            if (A[i] >= 10) ++A[i+1], A[i] -= 10;
        if (A[A.size()-1] == 0) A.pop_back();
    }
    else {
        if (A.size() == B.size()) {
            int i = A.size();
            while (--i && A[i] == B[i]);
            if (i != 0 && A[i] < B[i]) swap(A,B);
        }
        A.push_back(0);
        for (int i=1; i<(int)B.size(); ++i) {
            A[i] -= B[i];
            if (A[i] < 0) --A[i+1], A[i] += 10;
        }
        for (int i=B.size(); i<(int)A.size(); ++i)
            if (A[i] < 0) --A[i+1], A[i] += 10;
        if (A[A.size()-1] == 0) A.pop_back();
    }

    while (A[A.size()-1] == 0) A.pop_back();
    if (A.size() == 1) cout << 0;
    else {
        if (A[0] == -1) cout << '-';
        for (int i=A.size()-1; i>0; --i) cout << A[i];
    }
    cout << '\n';

    return 0;
}
