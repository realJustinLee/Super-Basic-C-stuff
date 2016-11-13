#include<string.h>
#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
    char herry[25];
    struct node *next;
}*Linklist ,LNode;
typedef struct
{
    Linklist front ,rear;
}Queue;
char map[1000][3];
int visit[1000];

void push(Queue *Q,char *str)
{
    Linklist p;
    p =(Linklist )malloc(sizeof(LNode));
    strcpy(p->herry,str);
    p->next=NULL;
    if(Q->front == NULL)
    {
        Q->front = p ;
        Q->rear = p ;
        return ;
    }
    Q->rear->next=p;
    Q->rear=p;
}

int bfs(Queue *Q,int n)
{
    while(Q->front != NULL )
    {
        char x=Q->front->herry[1];
        if(x=='m')
            return 1;
        for(int i=0;i<n&&map[i][0]!='\0';i++)
            if(map[i][0]==x&&visit[i]!=1)
            {
                push(Q,map[i]);
                visit[i]=1;
            }
        Q->front=Q->front->next;
    }
    return 0;
}

int main()
{
    char str[50];
    while( scanf("%s" , str ) != EOF)
    {
        getchar();
        int i=0;
        while(str[0]!='0')
        {
            int l=strlen(str);
            map[i][0]=str[0];
            map[i][1]=str[l-1];
            map[i][2]='\0';
            i++;
            scanf("%s",str);
            getchar();
        }
        Queue *Q;
        Q = new Queue;
        Q->front=Q->rear=NULL;

        memset(visit ,0,sizeof(visit));
        for(int j=0;j<i;j++)
            if(map[j][0]=='b')
            {
                push(Q,map[j]);
                visit[j]=1;
            }
        int ans=bfs(Q,i);
        if(ans)
            printf("Yes.\n");
        else
            printf("No.\n");
    }
    return 0;
}
