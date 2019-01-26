#include<stdio.h>

int main(void)
{
	int H,W;
	int i,j,count[100][100],ct,g[100]={0},r[100]={0};
	char a[100][100],c;
	
	scanf("%d %d",&H,&W);
	
	for(i=0;i<=H;i++){
		for(j=0;j<W;j++){
			a[i][j]=getchar();
			if(j==W){
				c=getchar();
			}
		}
	}
	
	for(i=0;i<=H;i++){
		for(j=0;j<W;j++){
			if(a[i][j]=='#'){
				count[i][j]=1;
			} else{
				count[i][j]=0;
			}
		}
	}
	
	//s‚Ìˆ—
	for(i=0;i<=H;i++){
		ct=0;
		for(j=0;j<W;j++){
			if(count[i][j]==0){
				ct++;
			}
		}
		if(ct==W){
			g[i]=1;
		}
	}
	for(i=0;i<=H;i++){
		if(g[i]==1)	i++;
		for(j=0;j<W;j++){
			printf("%c",a[i][j]);
		}
	}
	
	return 0;
}