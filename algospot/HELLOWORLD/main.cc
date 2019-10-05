#include <iostream>
using namespace std;

#define NMAX 52
char buf[NMAX];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> buf;
        cout << "Hello, " << buf << "!\n";
    }

    return 0;
}
