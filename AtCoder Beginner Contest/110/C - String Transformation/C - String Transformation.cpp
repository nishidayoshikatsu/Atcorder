#include<stdio.h>
#include<string.h>

//int len(char S[]);

int main(void)
{
	char S[200000], T[200000],U[200000];
	char c1, c2;
	int i, j, len, cnt = 0;
	
	scanf("%s",S);
	scanf("%s",T);
	
	len = strlen(S);
	
	for(i = 0;i < len;i++){
		strcpy(U,S);
		if(U[i] != T[i]){
			c1 = U[i];
			c2 = T[i];
			//strcpy(U,S);
			//printf("%s\n",S);
			for(j = 0;j < len;j++){ 
				if(U[j] == c2){
					U[j] = c1;
					continue;
				}
				if(U[j] == c1){
					U[j] = c2;
				}
			}
			//printf("%s\n",U);
		}
		//printf("%d:%s\n",i,T);
		//printf("%d:%s\n",i,T);
	}
	if(strcmp(T,U)==0){
		printf("Yes\n");
		return 0;
	}
	
	printf("No\n");
	return 0;
}

/*
int len(char S[])
{
	int length = 0;
	for(int l = 0;S[l] != '\n';l++){
		length++;
	}
	return length;
}
*/