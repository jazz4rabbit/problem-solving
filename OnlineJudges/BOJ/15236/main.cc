#include <iostream>
using namespace std;

int main(void)
{
    // a_n = a_(n-1) + n + (n + 1) + ... + (n + n)
    // a_n = a_(n-1) + n*(n+1) + n(n+1)/2
    // a_n = a_(n-1) + 3n(n+1)/2
    // a_n = 3n(n+1)/2 + 3(n-1)n/2 + 3(n-2)(n-1)/2 + ... + 3(1)(2)/2 + 3(0)(1)/2
    // a_n = sum_k=0^n { 3k(k+1)/2 }
    // a_n = 1.5*sum_k=0^n {k^2 + k}
    // a_n = 1.5[n(n+1)(2n+1)/6 +n(n+1)/2]
    // a_n = 1.5[n(n+1)/3*(n+2)
    // a_n = 0.5[n(n+1)(n+2)]
    int N;
    cin >> N;
    cout << N*(N+1)/2*(N+2) << endl;

    return 0;
}
