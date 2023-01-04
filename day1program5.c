#include<math.h>
#include<stdio.h>
void main()
{
int dd,mm,yy,yy1,ny,ly,i,n,days;
printf("Enter date in dd/mm/yy format");
scanf("%d",&dd);
scanf("%d",&mm);
scanf("%d",&yy);
printf("Enter the base year");
scanf("%d",&yy1);
int y1=yy1;
while(yy1<yy)
{
    if(yy1%4==0&&yy1%100!=0||yy1%400==0)
    {
        ly=ly+1;
    }
    yy1++;
}
ny=yy-y1;
for(i=1;i<mm;i++)
{
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
    {
        n=n+31;
    }
    else if(i==4||i==6||i==9||i==11)
    {
        n=n+30;
    }
    else
    {
        if(yy1%4==0&&yy1%100!=0||yy1%400==0)
            n=n+29;
        else
            n=n+28;
    }
    }
    days=(ny*365)+ly+dd+n;

printf(" NO. of days in between:%d",days);
days=days%7;
printf("\nCorresponding Day:");
switch(days)
{
    case 1: printf("Monday");
    break;
    case 2: printf("Tuesday");
    break;
    case 3: printf("Wednesday");
    break;
    case 4: printf("Thursday");
    break;
    case 5: printf("Friday");
    break;
    case 6: printf("Saturday");
    break;
    case 0: printf("Sunday");
}
}

