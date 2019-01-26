#include<stdio.h>

int main(void)
{
	int N, M, X, Y;
	int x[100], y[100];
	int i, j, k, cnt_x, cnt_y, Z;
	
	scanf("%d %d %d %d",&N,&M,&X,&Y);
	for(i = 0;i < N;i ++){
		scanf("%d",&x[i]);
	}
	for(i = 0;i < M;i ++){
		scanf("%d",&y[i]);
	}
	
	for(Z = X + 1;Z <= Y;Z ++){
		cnt_x = 0;
		cnt_y = 0;
		for(j = 0;j < N;j ++){
			if(x[j] < Z)	cnt_x++;
		}
		for(j = 0;j < M;j ++){
			if(y[j] >= Z)	cnt_y++;
		}
		if(cnt_x == N && cnt_y == M){
			printf("No War\n");
			return 0;
		}
	
	}
	
	printf("War\n");
	return 0;
}