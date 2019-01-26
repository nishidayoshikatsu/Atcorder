#include<stdio.h>

int main(void)
{
	int K,sum=0;
	
	scanf("%d",&K);
	
	for(int i=K;i>=1;i--){
		sum+=i/2;
	}
	
	printf("%d\n",sum);
	
	return 0;
}