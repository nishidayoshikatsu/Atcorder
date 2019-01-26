#include<stdio.h>

int sum_digits(int n);

int main(void)
{
	int N,A,B;
	int i,ans,total=0;
	
	scanf("%d %d %d",&N,&A,&B);
	
	for(i=1;i<=N;i++){
		ans=sum_digits(i);
		if(A<=ans && ans<=B){
			total+=i;
		}
	}
	
	printf("%d\n",total);
	
	return 0;
}

int sum_digits(int n)
{
	int sum=0;
	
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	
	return sum;
}