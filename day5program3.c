#include<stdio.h>
void main()
{
    int arr[100],i,sum1=0,sum2=0,mul,mid,n;
    printf("enter array range and it should be even :");
    scanf("%d",&n);
    printf("enter array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mid=(0+n-1)/2;
    for(i=0;i<=mid;i++)
    {
        sum1=sum1+arr[i];
        sum1++;
    }
    printf("sum of 1st half :%d\n",sum1);
    for(i=mid+1;i<n;i++)
    {
        sum2=sum2+arr[i];
        sum2++;
    }
    printf("sum of 2nd half :%d\n",sum2);
    mul=sum1*sum2;
    printf("multiplication of two sub arrays :%d",mul);
    
}