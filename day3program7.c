//Write a program to find the sum of the series using the function. a) 1/1!-2/3!+3/5!-4/7!+…
#include<stdio.h>
#include<math.h>
void main()
{
	int n,f=1,j,r=-1;
	float sum=0.0,i;
	printf("enter you want series till");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=(2*i)-1;j++)
		{
			f=f*j;
		}
		r=r*(-1);
		sum=sum+(float)(r*(i/f));
	}
	printf("sum of the series is %f",sum);
}