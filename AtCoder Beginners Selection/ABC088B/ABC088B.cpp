#include<stdio.h>

void Insert_Sort(int a[],int N);

int main(void)
{
	int N,a[100],i;
	int s_Alice=0,s_Bob=0;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	
	Insert_Sort(a,N);
	for(i=0;i<N;i++){
		if(i%2==0){
			s_Alice+=a[i];
		}
		else{
			s_Bob+=a[i];
		}
	}
	
	printf("%d\n",s_Alice-s_Bob);
	
	return 0;
}

void Insert_Sort(int a[],int N)
{
	int i,t,x;
	
	for(i=1;i<N;i++){
		t=i;
		x=a[t];
		while(a[t-1]<x && t>0){
			a[t]=a[t-1];
			t--;
		}
		a[t]=x;
	}
}