#include<stdio.h>
void main()
{
    int i,j;
    char s;
    for(i=1;i<=4;i++)
    {
      s=i+64;
    for(j=1;j<=i;j++)
        { 
            printf("%c",s);s++;
            
        }
        printf("\n");
    }
}