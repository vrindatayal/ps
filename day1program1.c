#include<stdio.h>
#include<math.h>
#include<stdint.h>
void main()
{
    float BS,HRA,DA,ALLOW,PF,TS;
    char d,a,b,c;
    printf("enter your salary\n");
    scanf("%f",&BS);
    HRA=(0.20)*BS;
    DA=(0.15)*BS;
    printf("press\n A for grade a\n B for grade b\n C for grade c and any other character\n");
    printf("enter your choice\n ");
    fflush(stdin);
    scanf("%c",&d);
    switch (d)
    {
      case 'a':
                ALLOW=1700;
                break;
      case 'b':
                ALLOW=1500;
                break;
      case 'c':
                ALLOW=1300;
                break;

      default:
            printf("enter valid choice");
    }
    PF=(0.11)*BS;
    TS=BS+HRA+DA+ALLOW-PF;
    printf("Total salary is :%f\n",TS);
    }






