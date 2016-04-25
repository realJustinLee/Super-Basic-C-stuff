#include <stdio.h>
int main(void){
    int mi,yd,ft,in;
    scanf("%d",&in);
    mi=in/63360;
    in=in%63360;
    yd=in/36;
    in=in%36;
    ft=in/12;
    in=in%12;
    if (mi!=0){
        printf("%d mi ",mi);
    }
    if (yd!=0){
        printf("%d yd ",yd);
    }
    if (ft!=0){
        printf("%d ft ",ft);
    }
    if (in!=0){
        printf("%d in ",in);
    }
    return 0;
}
