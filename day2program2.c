#include<stdio.h>
void main()
{
    int i,j,s,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=i;
        for(j=1;j<=i;j++)
    { printf("%d ",s);s++;
    }
     printf("\n");
    }
}