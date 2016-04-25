#include <stdio.h>
int main (void){
	int a,b,c,d,e,f,g;
	scanf("%d%d",&a,&b);
	c=a%4;
	d=a%100;
	e=a%400;
	f=28;
	g=b%2;
	if((c==0&&d!=0)||e==0){
		printf("Leap year,");
		f=29;
	}
	else
		printf("Common year,");
	if(b==3||b==4||b==5)
		printf("Spring,");
	if(b==6||b==7||b==8)
		printf("Summer,");
	if(b==9||b==10||b==11)
		printf("Fall,");
	if(b==12||b==1||b==2)
		printf("Winter,");
	if(b==1||b==3||b==5||b==8||b==10||b==12)
		printf("31");
	if(b==4||b==6||b==9||b==11)
		printf("30");
	if(b==2)
		printf("%d",f);
	return 0;
}
