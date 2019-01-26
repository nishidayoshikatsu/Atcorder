#include<stdio.h>

int main(void)
{
	int N,i,j,count1=0,count2=0;
	
	scanf("%d",&N);
	
	for(i=1;i<=N;i+=2){
		for(j=1;j<=i;j++){
			if(i%j==0){
				count1++;
			}
		}
		if(count1==8){
			count2++;
		}
		count1=0;
	}
	
	printf("%d\n",count2);
	
	return 0;
}