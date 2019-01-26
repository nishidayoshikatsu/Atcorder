#include<stdio.h>

int main(void)
{
	int A,B,C;
	int i,max,sum;
	
	scanf("%d %d %d",&A,&B,&C);
	
	sum = A + B + C;
	max = A;
	if(max < B)	max = B;
	if(max < C)	max = C;
	
	printf("%d\n",10 * max + (sum - max));
	
	return 0;
}