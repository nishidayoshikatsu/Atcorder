#include<stdio.h>

#define M 100		//値の範囲

int main(void)
{
	int N,d[100];
	int i,bin[M+1],dan=0;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&d[i]);
	}
	
	//ビンを空にする
	for(i=0;i<=M;i++){
		bin[M]=0;
	}
	//配列dのデータを順番にビンに振り分ける
	for(i=0;i<N;i++){
		bin[d[i]]=d[i];
	}
	//データが入っているビンの数を数える;
	for(i=0;i<=M;i++){
		if(!bin[i]){
			dan++;
		}
	}
	
	printf("%d\n",dan);
	
	return 0;
}