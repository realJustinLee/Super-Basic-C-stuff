#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 35
void print(int [][N]);//输出函数
void movebul(int [][N]);//子弹移动函数
void movepla(int [][N]);//敌机移动函数
void setting(void);//设置函数
void menu(void);//菜单函数
int scr[22][N]={0},pl=9,width=24,speed=3,density=30,score=0,death=0;//全局变量：界面、我机初始位、界面宽度、敌机速度、敌机密度、得分、死亡
main(void)
{
    menu();
    int i=0,j=0;
    scr[21][pl]=1;
    scr[0][5]=3;
    while(1){if(kbhit())switch(getch())//控制左右移动和进入菜单
            {case 'a':case 'A':if(pl>0)scr[21][pl]=0,scr[21][--pl]=1;break;
                case 'd':case 'D':if(pl<width-2)scr[21][pl]=0,scr[21][++pl]=1;
                    break;
                case 'w':case 'W':scr[20][pl]=2;break;case 27 :setting();
                    break;
            }
        if(++j%density==0)//控制生产敌机的速度
        {j=0;srand(time(NULL));
            scr[0][rand()%width]=3;
        }
        if(++i%speed==0)//控制敌机移动速度，相对于子弹移动速度
            movepla(scr);
        movebul(scr);
        print(scr);
        if(i==30000)i=0;//以免i 越界
    }
}
void print(int a[][N]){system("cls");
    int i,j;
    for(i=0;i<22;i++){a[i][width-1]=4;
        for(j=0;j<width;j++){if(a[i][j]==0)printf(" ");
            if(a[i][j]==1)printf("\5");//输出我机的符号
            if(a[i][j]==2)printf(".");//子弹
            if(a[i][j]==3)printf("\3"); //输出敌机符号
            if(a[i][j]==4)printf("|");
            if(i==0&&j==width-1)printf("得分：%d",score);//右上角显示得分
            if(i==1&&j==width-1)printf("死亡：%d",death);
            if(i==2&&j==width-1)printf("设置：Esc");
            if(i==3&&j==width-1)printf("Copyright:李欣");
        }
        printf("\n");
    }
}
void movebul(int a[][N]){int i,j;
    for(i=0;i<22;i++)
        for(j=0;j<width;j++)
        {
            if(i==0&&a[i][j]==2)a[i][j]=0;if(a[i][j]==2)
            {
                if(a[i-1][j]==3)score+=10,printf("\7");
                a[i][j]=0,a[i-1][j]=2;
            }
        }
}
void movepla(int a[][N])
{
    int i,j;
    for(i=21;i>=0;i--)//从最后一行往上是为了避免把敌机直接冲出数组。
        for(j=0;j<width;j++)
        {
            if(i==21&&a[i][j]==3)a[i][j]=0;//底行赋值0 以免越界。
            if(a[i][j]==3)a[i][j]=0,a[i+1][j]=3;
        }
    if(a[20][pl]==3&&a[21][pl]==1)death++;
}
void setting(void)
{
    int sw=0,i,j;
    system("cls");
    do{sw=0;printf("\n 游戏界面的大小：1.大2.小>> ");
        switch(getche())
        {
            case '1':width=34;break;
            case '2':width=24;break;
            default:printf("\n 错误，请重新选择...\n");
                sw=1;
        }
    }
    while(sw);
    do
    {
        sw=0;
        printf("\n 请选择敌机密度：1.大2.中3.小>> ");
        switch(getche())
        {
            case '0':density=10;
                break;
            case '1':density=20;
                break;case '2':density=30;
                break;case '3':density=40;break;
            default:printf("\n 错误，请重新选择...\n");
                sw=1;
        }
    }
    while(sw);
    do
    {
        sw=0;
        printf("\n 敌机的飞行速度：1.快2.中3.慢>> ");
        switch(getche())
        {
            case '1':speed=2;
                break;
            case '2':speed=3;
                break;
            case '3':speed=4;
                break;
            default:printf("\n 错误，请重新选择...\n");
                sw=1;
        }
    }
    while(sw);
    for(i=0;i<22;i++)
        for(j=0;j<45;j++)
            scr[i][j]=0;
    scr[21][pl=9]=1;
    printf("\n 按任意键保存...");
    getch();
}
void menu(void)
{
    printf("说明：按A D 控制我机左右飞行，W 发射子弹\n 设置：请按Esc\n 开始游戏：任意键\n                                            Copyright 李欣");
    if(getch()==27)setting();
}