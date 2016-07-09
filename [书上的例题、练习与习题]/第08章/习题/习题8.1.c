#include <stdio.h>
#include <stdlib.h>
void Abubble(int *p,int n) {
    int i, j, t;
    for (i = 1; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (p[j] > p[j+1]) {
                t = p[j];
                p[j] = p[j+1];
                p[j+1] = t;
            }
        }
    }
}
void Dbubble(int *p,int n) {
    int i, j, t;
    for (i = 1; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (p[j] < p[j+1]) {
                t = p[j];
                p[j] = p[j+1];
                p[j+1] = t;
            }
        }
    }
}
int main(void) {
    const int n = 10;
    int i, *p;
    char ch;
    if ((p = (int *) calloc(n, sizeof(int))) == NULL) {
        printf("Not able to allocate memory.\n");
        exit(1);
    }
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    getchar();
    scanf("%c", &ch);
    if (ch == 'A') {
        Abubble(p, n);
    }
    else if (ch == 'D') {
        Dbubble(p, n);
    }
    printf("After sorted, array is \n");
    for (i = 0; i < n; i++) {
        printf(" %d ", p[i]);
    }
    return 0;
}

