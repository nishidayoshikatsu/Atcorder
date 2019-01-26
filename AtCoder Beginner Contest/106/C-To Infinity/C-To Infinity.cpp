#include<stdio.h>

int main(void)
{
	char S[100];
	int i,count=0;
	long int K;
	
	scanf("%s",S);
	scanf("%ld",&K);
	
	for(i=0;i<K;i++){
		if(S[i]!='1'){
			printf("%c\n",S[i]);
			return 0;
		}
	}
	
	printf("1\n");
	
	return 0;
}