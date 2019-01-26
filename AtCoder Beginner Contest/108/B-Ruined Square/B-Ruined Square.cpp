#include<stdio.h>
#include<math.h>

#define PI 3.14159265359

int marume(float x);

int main(void)
{
	int x[4],y[4];
	float len,rad;
	
	scanf("%d %d %d %d",&x[0],&y[0],&x[1],&y[1]);
		
	len=sqrt(pow(x[1]-x[0],2)+pow(y[1]-y[0],2));
	rad=atan2(y[1]-y[0],x[1]-x[0]);
	
	printf("len:%f\n",len);
	printf("rad:%f\n",rad);
	if(x[1]-x[0]==0){
		x[2]=x[1]-len;
		y[2]=y[1];
		x[3]=x[0]-len;
		y[3]=y[2]-len;
	} else{
		x[2]=marume((float)x[1]-len*cos(PI/2-rad));
		y[2]=marume((float)y[1]+len*sin(PI/2-rad));
		x[3]=marume((float)x[2]-len*cos(rad));
		y[3]=marume((float)y[2]-len*sin(rad));
	}
	
	printf("%d %d %d %d\n",x[2],y[2],x[3],y[3]);
	
	return 0;
}

int marume(float x)
{
	if ( x > 0.0 ) {
        	return floor(x + 0.5);
	} else {
        	return -1.0 * floor(fabs(x) + 0.5);
    	}
}