#include <iostream>
#include <vector>
using namespace std;

int A, B, N, c, r, mn, s, pA, pB;
vector<int> p;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    
    cin >> A >> B >> N;
    mn = 1001;
    while (N--) {
        cin >> c >> r;
        p.clear();
        while (r--) {
            cin >> s;
            p.push_back(s);
        }
        if (mn <= c) continue;
        
        pA = pB = -1;
        for (int i=0; i<(int)p.size(); ++i) {
            if (p[i] == A) {
                pA = i;
                break;
            }
        }
        for (int i=0; i<(int)p.size(); ++i) {
            if (p[i] == B) {
                pB = i;
                break;
            }
        }
        if (pA == -1 || pB == -1) continue;
        else if (pA < pB && mn > c) mn = c;
    }
    cout << (mn == 1001 ? -1 : mn) << '\n';

    return 0;
}
