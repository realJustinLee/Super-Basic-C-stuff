#include <stdio.h>
void matrix(int N) {
    int matrix[100][100]={{0}};
    int i=0, j = N / 2, k;
    matrix[0][j] = 1;
    for (k = 2; k <= N * N; k++) {
        if (i == 0 && j == N - 1) {
            i++;
            matrix[i][j] = k;
            continue;
        }
        i = (i - 1 + N) % N;
        j = (j + 1) % N;
        if (matrix[i][j] != 0) {
            i = ((i + 1) % N + 1) % N;
            j = (j - 1 + N) % N;
            matrix[i][j] = k;
        }
        else {
            matrix[i][j] = k;
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf(" %4d", matrix[i][j]);
        }
        printf("\n");
    }
}
int main(void) {
    int N;
    int i = 0;
    while (scanf("%d", &N) == 1) {
        printf("Case %d:\n", ++i);
        matrix(N);
    }
    return 0;
}

