#include <iostream>
#include <string>
using namespace std;

int T;
string N;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    cin >> T;
    for (int tc=1; tc<=T; ++tc) {
        cin >> N;
        int idx = -1, acc=1;
        for (int i=0; i<(int)N.size()-1; ++i) {
            if (N[i] == N[i+1]) ++acc;
            else if (N[i] > N[i+1]) {
                idx = i+1;
                break;
            }
            else acc = 1;
        }
        cout << "Case #" << tc << ": ";
        if (idx == -1) cout << N;
        else {
            --N[idx-acc];
            if (idx-acc == 0 && N[idx-acc] == '0') {}
            else {
                for (int i=0; i<=idx-acc; ++i) cout << N[i];
            }
            for (int i=idx-acc+1; i<(int)N.size(); ++i) cout << '9';
        }
        cout << '\n';
    }

    return 0;
}
