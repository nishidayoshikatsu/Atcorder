#include<stdio.h>

#define N 200

int main(void)
{
	long int a[N];
	int i,n,count1=0,count2=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	i=0;
	while(1){
		for(i=0;i<n;i++){
			if(a[i]%2==0){
				a[i]/=2;
				count1++;
			}
		}
		if(count1==n){
			count1=0;
			count2++;
		}
		else{
			break;
		}
	}
	
	printf("%d\n",count2);
	
	return 0;
}