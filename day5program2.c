#include<stdio.h>
void main()
{
    int array[10]={45,76,88,45,65,78,56,36,43,57},i,max;
    max=array[0];
    for(i=0;i<11;i++)
    {
        if (max<array[i])
       max= array[i];
    }
    printf("highest no of days room iluminated %d",max);
}