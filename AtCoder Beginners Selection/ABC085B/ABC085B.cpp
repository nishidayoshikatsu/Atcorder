#include<stdio.h>

#define M 100		//�l�͈̔�

int main(void)
{
	int N,d[100];
	int i,bin[M+1],dan=0;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&d[i]);
	}
	
	//�r������ɂ���
	for(i=0;i<=M;i++){
		bin[M]=0;
	}
	//�z��d�̃f�[�^�����ԂɃr���ɐU�蕪����
	for(i=0;i<N;i++){
		bin[d[i]]=d[i];
	}
	//�f�[�^�������Ă���r���̐��𐔂���;
	for(i=0;i<=M;i++){
		if(!bin[i]){
			dan++;
		}
	}
	
	printf("%d\n",dan);
	
	return 0;
}