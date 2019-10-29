#include <iostream>
#include <string>
using namespace std;

string unicode2utf8(unsigned int code)
{
    string ret;
    ret.push_back(0xe0 | (code >> 12));
    ret.push_back(0x80 | (0x3f & (code >> 6)));
    ret.push_back(0x80 | (0x3f & code));
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int code = 0xac00, N;
    cin >> N;
    code += N-1;

    cout << unicode2utf8(code) << endl;

    return 0;
}
