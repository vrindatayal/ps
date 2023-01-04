3#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers to check greatest\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if(a>c)
        {
            printf("a is greatest:%d\n",a);
        }
        else
        {
            printf("a is not greatest:%d\n",a);
        }
    }
    if(b>c)
    {
        if (b>a)
        {
            printf("b is greatest:%d\n",b);
        }
        else
        {
            printf("b is not greatest:%d\n",b);
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            printf("c is greatest:%d\n",c);
        }
        else
        {
            printf("c is not greatest:%d\n",c);
        }
    }
}
