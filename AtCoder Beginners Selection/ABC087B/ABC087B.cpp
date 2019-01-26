#include<stdio.h>

int main(void)
{
	int A,B,C,X;
	int i,j,k,sum,count=0;
	
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	scanf("%d",&X);
	
	for(i=0;i<=A;i++){
		for(j=0;j<=B;j++){
			for(k=0;k<=C;k++){
				sum=500*i+100*j+50*k;
				if(sum==X){
					count++;
				}
			}
		}
	}
	
	printf("%d\n",count);
	
	return 0;
}