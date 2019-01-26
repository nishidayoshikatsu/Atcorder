#include<stdio.h>

long int v(long int select[],long int K);
long int sa(long int x,long int y);

long int x[100000];

int main(void)
{
	long int N,K,count=0;
	int i,jikan=0;
	
	scanf("%ld %ld",&N,&K);
	for(i=0;i<N;i++){
		scanf("%d",&x[i]);
	}
	
	return 0;
}

long int v(long int select[],long int K)
{
	long int ve,sa,i;
	
	ve=select[0];
	for(i=1;i<K-1;i++){
		sa=sasa(select[i],select[i+1]);
		ve+=sa*1;
	}
}
			
long int sa(long int x,long int y)
{
	long int sasa=x-y;
	
	if(sasa<0){
		return sasa*=-1;
	} else{
		return sasa;
	}
}