#include<stdio.h>
void main()
{
    int i,j,s;
    printf("the pattern is\n");
    for(i=1;i<=4;i++)
    {   s=i;
        for(j=1;j<=i;j++)
        { 
            printf("%d",s);
            s++; 
        }
        printf("\n");
    }
}