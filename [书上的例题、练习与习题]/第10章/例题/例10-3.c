#include <stdio.h>

void reverse(int num) {
    if (num <= 9) {
        printf("%d", num);
    }
    else {
        printf("%d\n", num);
        reverse(num / 10);
    }
}

int main(void) {
    int n;
    printf("Input n:");
    scanf("%d", &n);
    printf("OK!\n");
    reverse(n);
    return 0;
}