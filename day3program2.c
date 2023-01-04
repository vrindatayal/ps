// Write a program to find the sum of the series using the function. a) 1!/1+2!/2+3!/3+4!/4+5!/5

#include<stdio.h>
void main()
{
    int n, i, j, f ,sum=0;
    printf("enter the no. of term you want to sum till\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
{
    f=1;
    for(j=1; j<=i; j++)
    {
        f=f*j;
    }
    sum=sum+(f/i);
}
printf("sum of series: %d\n",sum);

}