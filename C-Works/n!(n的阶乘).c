#include <stdio.h>

int main(void) {
    int n;
    int factorial(int n);
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return 0;
}

int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}


#include <stdio.h>

int main(void) {
    int n, r, ways;
    while (scanf("%d%d", &n, &r)) {
        ways = 0;



        printf("%d\n", ways);
    }
    return 0;
}
