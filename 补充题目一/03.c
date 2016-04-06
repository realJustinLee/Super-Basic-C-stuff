#include <stdio.h>
int main(void)
{
    char sign;
    int x, y;

    printf("Input x op y: ");
    scanf("%d %c %d", &x, &sign, &y);
    if(sign == '*')
        printf("%d * %d = %d\n", x, y, x*y);
    else if(sign == '/')
        printf("%d / %d = %d\n", x, y, x /y);
    else if(sign == '%')
        printf("%d Mod %d = %d\n", x, y, x % y);
    else
        printf("Error\n");
    return 0;
}

