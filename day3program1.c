// Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................

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
    sum=sum+f;
}
printf("sum of series: %d\n",sum);

}