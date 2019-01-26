#include<stdio.h>

int main(void)
{
	int A,B,C;
	
	scanf("%d %d",&A,&B);
	
	for(int i=1;i<=3;i++){
		if((A*B*i)%2==1){
			printf("Yes\n");
			return 0;
		}
	}
	
	printf("No\n");
	return 0;
}