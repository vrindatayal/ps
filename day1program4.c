#include<stdio.h>
void main()
{
    int y;
    printf("enter year to check \n");
    scanf("%d",&y);
    if(y%4==0&&y!=100||y%400==0)
    {
        printf("%d is a leap year",y);
    }
    else
    {
        printf("%d is not a leap year",y);
    }
}
