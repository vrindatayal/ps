// Given a positive integer n and the task is to find the sum of series
// 1*2*3 + 2*3*4 +3*4*5+ 4*5*6 + . …... .+ n*(n+1)*(n+2).

#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,sum=0;
    printf("enter the series you want till\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*(i+1)*(i+2));
    }
    printf("sum is:%d",sum);
}