//1- x2/2! + x4/4! - x6/6!........


#include<stdio.h>
#include<math.h>
void main()
{
	int n,x,f=1,i,j,r=-1;
	float sum=0.0;
	printf("enter you want series till");
	scanf("%d",&n);
	printf("enter the value of x");
	scanf("%d",&x);
	for(i=0;i<(2*n)-1;i=i+2)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		r=r*(-1);
		sum=sum+(float)(r*(pow(x,i)/f));
	}
	printf("sum of the series is %f",sum);
}