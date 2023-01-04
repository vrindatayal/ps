#include<stdio.h>
void main()
{
    int a[6]={2,4,5,3,6,9},i,min;
    min=a[0];
    for(i=0;i<7;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    printf("lowest no choclate is :%d",min);
}