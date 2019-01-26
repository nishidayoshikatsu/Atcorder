#include<stdio.h>
 
int main(void)
{
	int A, B, C, S;
	
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	scanf("%d",&S);
	
	int sum = A + B + C;
	if(sum <= S && (sum+3) >= S){
		printf("Yes\n");
		return 0;
	}
	
	printf("No\n");
	return 0;
}