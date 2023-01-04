// 1- x + x2/2! - x3/3! + x4/4!......

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int n,x,i,j,f,r=-1;
    float sum=0.0;
    printf("enter you want series till\n");
    scanf("%d",&n);
    printf("enter the value of x\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
            r=r*(-1);
        }
        sum=sum+(float)(r*(pow(x,i)/f));
    }
    printf("sum of series is :%f",sum);
}