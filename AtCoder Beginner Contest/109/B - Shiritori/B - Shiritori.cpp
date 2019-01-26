#include<stdio.h>
#include<string.h>

int main(void)
{
	int N,i,j,len[100];
	char W[100][10],lastchar,firstchar;
	
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s",W[i]);
		//printf("%s\n",W[i]);
		len[i]=strlen(W[i]);
		//printf("%d\n",len[i]);
	}
	
	for(i=0;i<N-1;i++){
		lastchar=W[i][len[i]-1];
		//printf("lastchar:%c\n",lastchar);
		firstchar=W[i+1][0];
		//printf("firstchar:%c\n",firstchar);
		if(lastchar!=firstchar){
			printf("No\n");
			return 0;
		}
	}
	
	for(i=0;i<N-1;i++){
		//printf("key:%s\n",W[i]);
		for(j=i+1;j<N;j++){
			//printf("search:%s\n",W[j]);
			if(strcmp(W[i],W[j])==0){
				printf("No\n");
				return 0;
			}
		}
	}
	
	printf("Yes\n");
	return 0;
}