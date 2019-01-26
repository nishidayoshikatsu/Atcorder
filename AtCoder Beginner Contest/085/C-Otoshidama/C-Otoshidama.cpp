#include<stdio.h>

int main(void)
{
	int N;
	long int Y;
	
	scanf("%d %ld",&N,&Y);
	
	for(int i=0;i<=N;i++){
		for(int j=0;j<=(N-i);j++){
			if(Y==10000*i+5000*j+1000*(N-i-j)){
				printf("%d %d %d\n",i,j,N-i-j);
				return 0;
			}
		}
	}
	printf("-1 -1 -1\n");
	return 0;
}