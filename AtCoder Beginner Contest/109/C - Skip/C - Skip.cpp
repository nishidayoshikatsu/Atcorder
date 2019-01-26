#include<stdio.h>

#define M 999999999

int main(void)
{
	long int N,X,x[100000];
	int i,j,k,cnt=0;
	
	scanf("%ld %ld",&N,&X);
	for(i=0;i<N;i++){
		scanf("%d",x[i]);
	}
	
	for(i=M;i>=1;i--){
		for(j=0;j<N;j++){
			for(k=1;k<M;k++){
				if(x[j]==X+i*k || x[j]==X-i*k){
					cnt++;
				}
				if(cnt==N){
					printf("%ld\n",i);
					return 0;
				}
			}
		}
	}
	
	return 0;
}