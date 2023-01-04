1#include<stdio.h>
void main()
{
    int temp;
    printf("enter temperature in degree celsius\n ");
    scanf("%d",&temp);
    if (temp <0)
    printf("weather is freezing\n");
    if(temp>=0&&temp<=10)
    printf("weather is very cold\n");
    if(temp>10&&temp<=20)
    printf("weather is cold\n");
    if(temp>20&&temp<=30)
    printf("normal temprature\n");
    if(temp>30&&temp<40)
    printf("its hot\n");
    if(temp>=40)
    printf("its very hot\n");
}
