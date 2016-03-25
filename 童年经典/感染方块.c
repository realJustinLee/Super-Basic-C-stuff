#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int DIFFICULT=44;
int count=0 ;
int TYPE_SHAPE=2 ;
int flag=7 ;
int LINE=12;

struct MyStruct
{
    int shape ;
    int color ;
    int infect ;
};

void SetColor(unsigned short ForeColor,unsigned short BackGroundColor)
{
    HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,ForeColor|BackGroundColor);
}

void WelcomeScr()
{
    int i;
    printf("\n\n\n\t\t");
    printf("●程序初始化中〉");
    for(i=0; i<=100; i++)
    {
        SetColor(i%6+8,0);
        printf("%3d",i);
        SetColor(15,0);
        printf(" %%");
        SetColor(i%6+8,0);
        printf(" Copyright 李欣");
        Sleep(20);
        printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    }
    printf("\a");
    Sleep(1000);
    system("cls");
    printf("\n\n\n\t\t");
    SetColor(15,0);
    printf("●请输入方块行数 〉 （最好不超过21行）");
    printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%d",&LINE);
    printf("\n\n\n\t\t");
    printf("●请输入最大次数 〉");
    scanf("%d",&DIFFICULT);
    system("cls");
}

void Show()
{
    int i ;
    SetColor(15,0);
    printf("\n ※ 操作次数： %-2d / %d  （共%3d个色块）\n",count,DIFFICULT,LINE*LINE);
    printf("\n ※ 操作方法： ");
    for(i=1; i<7; i++)
    {
        SetColor(15,0);
        printf("%d.",i);
        SetColor(i+8,0);
        printf("%c ",TYPE_SHAPE);
    }
    SetColor(15,0);
    printf("7.");
    SetColor(9,0);
    printf("重");
    SetColor(10,0);
    printf("新");
    SetColor(11,0);
    printf("生");
    SetColor(12,0);
    printf("成 ");
    SetColor(15,0);
    printf("0.");
    SetColor(14,0);
    printf("改");
    SetColor(13,0);
    printf("变");
    SetColor(12,0);
    printf("图");
    SetColor(11,0);
    printf("案 ");
    SetColor(15,0);
    printf("\n\n ※ 请按下 0 ~ 7 键位> ");
}

int Choose()
{
    int choose ;
    fflush(stdin);
    scanf("%d",&choose);
    switch(choose)
    {
        case 0 :
            TYPE_SHAPE++;
            if(TYPE_SHAPE==7)
            {
                TYPE_SHAPE=1 ;
            }
            return 0 ;
        case 1 :
            return 1 ;
        case 2 :
            return 2 ;
        case 3 :
            return 3 ;
        case 4 :
            return 4 ;
        case 5 :
            return 5 ;
        case 6 :
            return 6 ;
        case 7 :
            return 7 ;
        default :
            printf("\n\t\t\a● 输入无效，请重新输入！");
            Sleep(1000);
            return 0 ;
    }
}

void main()
{
    int i,j ;
    int num=0 ;
    char ch ;
    int cc ;
    int jj;
    struct MyStruct array[41][41];
    system("title 感染方块 李欣 QQ：2752110543");
    srand((time(NULL)%100)*rand());
    WelcomeScr();
    loop :
    for(i=0; i<LINE; i++)
    {
        for(j=0; j<LINE; j++)
        {
            array[i][j].shape=TYPE_SHAPE ;
            if(flag==7)
            {
                array[i][j].color=rand()%6+1 ;
                array[i][j].infect=0 ;
                count=0 ;
                cc=1 ;
            }
        }
    }
    printf("\n");
    array[0][0].infect=1 ;
    for(jj=0; jj<LINE; jj++)
    {
        for(i=0; i<LINE; i++)
        {
            for(j=0; j<LINE; j++)
            {
                if(array[i][j].color==array[i][j+1].color&&array[i][j].infect==1&&array[i][j+1].infect!=1)
                {
                    array[i][j+1].infect=1 ;
                }
                if(array[i][j].color==array[i+1][j].color&&array[i][j].infect==1&&array[i+1][j].infect!=1)
                {
                    array[i+1][j].infect=1 ;
                }
            }
        }

        for(i=LINE-1; i>0; i--)
        {
            for(j=LINE-1; j>0; j--)
            {
                if(array[i][j].color==array[i-1][j].color&&array[i][j].infect==1&&array[i-1][j].color!=1)
                {
                    array[i-1][j].infect=1 ;
                }
                if(array[i][j].color==array[i][j-1].color&&array[i][j].infect==1&&array[i][j-1].color!=1)
                {
                    array[i][j-1].infect=1 ;
                }
            }
        }
        cc=1 ;
        for(i=0; i<LINE; i++)
            for(j=0; j<LINE; j++)
            {
                if(array[i][j].infect==0)
                {
                    cc=0 ;
                    break ;
                }
            }
    }
    for(i=0; i<LINE; i++)
    {
        printf(" ");
        for(j=0; j<LINE; j++)
        {
            SetColor(array[i][j].color+8,0);
            printf("%c ",array[i][j]);
        }
        printf("\n");
    }
    Show();
    if(count<=DIFFICULT&&cc==1&&flag!=7&&flag!=0)
    {
        system("cls");
        printf("\n\n\n\n\t\t\t●%5d个色块你用了%d步完成  ●",LINE*LINE,count);
        printf("\n\n\t\t\t● 恭喜你，您获得了胜利！\n");
        loop2 :
        printf("\n\t\t\t\a● 是否继续？（Y/N）>");
        fflush(stdin);
        if((ch=getch())=='Y'||ch=='y')
        {
            system("cls");
            flag=7 ;
            goto loop ;
        }
        else if(ch=='n'||ch=='N')
        {
            system("cls");
            printf("\n\t\t\t● 谢 谢 您 的 使 用 ！\n\n\t\t\t● 作 者: 李欣\n\n\t\t\t● Q Q: 2752110543\n\n\t\t\t● Cpoyright 李欣 All rights reserved ●");
            Sleep(5000);
            exit(1);
        }
        else
        {
            printf("\n\n\t\t\t\a● 输入错误重新输入 >");
            Sleep(1000);
            system("cls");
            goto loop2 ;
        }
    }
    else if(count>DIFFICULT)
    {
        system("cls");
        printf("\n\n\n\n\t\t\t\a● 很遗憾，您闯关失败！\n");
        goto loop2 ;
    }
    else
        ;
    flag=Choose();
    if(flag!=0)
    {
        array[0][0].color=flag ;
        if(flag!=7)
        {
            count++;
        }
        for(i=0; i<LINE; i++)
        {
            for(j=0; j<LINE; j++)
            {
                if(array[i][j].infect==1)
                {
                    array[i][j].color=flag ;
                }
            }
        }
    }
    system("cls");
    goto loop ;
}
