#include <stdio.h>
int main(void) {
    char ch;
    ch=getchar();          //将一个字符录入ch
    putchar(ch);           //输出ch中的字符
    putchar('\a');         //电脑叫一声
    return 0;
}
