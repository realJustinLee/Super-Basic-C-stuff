#include <stdio.h>
int main (void){
	int a,b,c,d;
	scanf("%d",&a);
	b=a%3;
	c=a%5;
	d=a%7;
	if(b==0&&c==0&&d==0)
		printf("Can be divisible by 3,5,7.");
	else if(b!=0)
	if(c==0&&d==0)
		printf("Can be divisible by 5,7.");
	else if(c==0)
		printf("Can be divisible by 5.");
	else if(d==0)
		printf("Can be divisible by 7.");
	else
		printf("Can not be divisible by 3,5,7.");
	else if(c!=0&&d!=0)
		printf("Can be divisible by 3.");
	else if(c==0)
		printf("Can be divisible by 3,5.");
	else
		printf("Can be divisible by 3,7.");
	return 0;
}
