#inlcude<stdio.h>

void Insert_Sort(long int a[],long int N);

int main(void)
{
	long int a[100000],N;
	int i;
	
	scanf("%ld",&N);
	for(i=0;i<N;i++){
		scanf("%ld",&a[i]);
	}
	
	Insert_Sort(a,N);
	
	return 0;
}