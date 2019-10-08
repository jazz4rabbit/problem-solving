#include <stdio.h>

#define NMAX 1001
#define INF 100

int tt, A[NMAX], N, L;

int main(void)
{
    scanf("%d", &tt);
    while (tt--) {
        scanf("%d %d", &N, &L);
        for (int i = 1; i <= N; i++) {
            scanf("%d", A + i);
            A[i] += A[i-1];
        }

        double ret = INF;
        for (int i = 0; i <= N-L; i++) {
            for (int j = i+L; j <= N; j++) {
                double tmp = (A[j]-A[i]) / (double)(j-i);
                if (ret > tmp) ret = tmp;
            }
        }
        printf("%.8lf\n", ret);
    }

    return 0;
}
