#include <iostream>
#include <ctime>
using namespace std;

char buf[30];

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    time_t raw_time = time(NULL);
    tm* ptm = gmtime(&raw_time);

    std::strftime(buf, sizeof(buf), "%Y\n%m\n%d", ptm);
    cout << buf << '\n';

    return 0;
}
