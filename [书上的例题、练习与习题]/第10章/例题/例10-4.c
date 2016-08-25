#include <stdio.h>

void hanio(int n, char a, char b, char c) {
    if (n == 1) {
        printf("%c-->%c\n", a, b);
    }
    else {
        hanio(n - 1, a, c, b);
        printf("%c-->%c\n", a, b);
        hanio(n - 1, c, b, a);
    }
}

int main(void) {
    int n;
    printf("Input the number of disk: ");
    scanf("%d", &n);
    printf("The steps for %d disk are:\n", n);
    hanio(n, 'a', 'b', 'c');
    return 0;
}