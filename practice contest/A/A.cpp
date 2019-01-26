#include<stdio.h>

#define N 100

int main(void)
{
	int a,b,c;
	char cs,s[N];
	
	scanf("%d",&a);
	scanf("%d %d",&b,&c);
	cs=getchar();
	gets(s);
	
	printf("%d %s\n",a+b+c,s);
	
	return 0;
}