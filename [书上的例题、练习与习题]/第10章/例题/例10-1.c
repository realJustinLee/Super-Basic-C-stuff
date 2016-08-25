#include <stdio.h>
#include <math.h>

#define PI 3.141592654

double vol_ball() {
    double r;
    printf("请输入球体半径：");
    scanf("%lf", &r);
    return (4.0 / 3.0 * PI * r * r * r);
}

double vol_cylind() {
    double r, h;
    printf("请输入圆柱体的底圆半径和高：");
    scanf("%lf%lf", &r, &h);
    return (PI * r * r * h);
}

double vol_cone() {
    double h, r;
    printf("请输入圆锥体的底圆半径和高：");
    scanf("%lf%lf", &r, &h);
    return (PI * r * r * h / 3.0);
}

void cal(int sel) {
    switch (sel) {
        case 1:
            printf("球体体积为: %.2f\n", vol_ball());
            break;
        case 2:
            printf("圆柱体体积为：%.2f\n", vol_cylind());
            break;
        case 3:
            printf("圆锥体体积为：%.2f\n", vol_cone());
            break;
    }
}

int main(void) {
    int sel;
    while (1) {
        printf(" 1-计算球体体积");
        printf(" 2-计算圆柱体体积");
        printf(" 3-计算圆锥体体积");
        printf(" 其他-退出程序运行");
        printf("请输入计算命令：");
        scanf("%d", &sel);
        if (sel < 1 || sel > 3) {
            break;
        }
        else {
            cal(sel);
        }
    }
    return 0;
}