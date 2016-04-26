#include <stdio.h>
int main(void) {
	char s;
	int a=0,b=0,c=0,d=0;
	printf("Input 15 characters: ");
	while((s=getchar())!='\n') {
		if((s<='z'&&s>='a')||(s<'Z'&&s>'A')) {
			a++;
		}
		else if(s==' ')
			b++;
		else if(s<58&&s>47)
			c++;
		else d++;
	}
	printf("letter=%d,blank=%d,digit=%d,other=%d",a,b,c,d);
	return 0;
}