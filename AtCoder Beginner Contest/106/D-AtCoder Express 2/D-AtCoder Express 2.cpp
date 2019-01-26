#include<stdio.h>

int buildSumTable(int L[],int R[]);

int N,M,Q;

int main(void)
{
	int L[200000],R[200000],p[100000],q[100000];
	int i,j,count[100000]={0};
	
	scanf("%d %d %d",&N,&M,&Q);
	for(i=0;i<M;i++){
		scanf("%d %d",&L[i],&R[i]);
	}
	for(i=0;i<Q;i++){
		scanf("%d %d",&p[i],&q[i]);
	}
	
	for(i=0;i<Q;i++){
		int ans=getSumRange(p[i],q[i]);
		printf("
	
	return 0;
}

int buildSumTable(int L[],int R[])
{
	int i,j;
	int sum[N+1][N+1];
	
	for(i=0;i<M;i++){
		sum[L[i]][R[i]]++;
	}
	
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			sum[i][j]+=sum[i-1][j];
			sum[i][j]+=sum[i][j-1];
			sum[i][j]-=sum[i-1][j-1];
		}
	}
}

int getSumRange(int L,int R){
	int ans=sum[R][R]-sum[R][L-1]-sum[L-1][R]+sum[L-1][L-1];
	return ans;
}