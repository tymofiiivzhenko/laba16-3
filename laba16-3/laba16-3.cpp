#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 3
#define M 5

int main() {

    int i, j, maxnegative, s[N][M], d[M];

    printf("Enter elements for s[%d x %d]:\n", N, M);
    for (j = 0; j < M; ++j) {
        for (i = 0; i < N; ++i) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &s[i][j]);
        }
    }

    printf("\ns[3 x 5]:\n");
    for (i = 0; i < N; ++i) {
        for (j = 0; j < M; ++j) {
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < M; ++j) {
        maxnegative = s[0][j];
        for (i = 1; i < N; ++i) {
            if (s[i][j] < 0 && s[i][j] < maxnegative) {
                maxnegative = s[i][j];
            }
        }
        d[j] = maxnegative;
    }

    printf("\nd[5]:\n");
    for (j = 0; j < M; ++j) {
        printf("%d\t", d[j]);
    }


    return 420;
}