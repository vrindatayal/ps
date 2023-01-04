#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=3;i>=1;i--) //used for rows
    {
        for(j=i;j<4;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
     for(i=2;i<=3;i++)
    {   
        for(j=i;j<4;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
         {
            printf("*");
        
         }
         printf("\n");
    }
    }
