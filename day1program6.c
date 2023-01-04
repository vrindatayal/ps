#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the length the sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
    {
        printf("triangle is equilateral");
    }
    if(a==b&&a!=c&&b!=c||a==c&&a!=b&&c!=b||b==c&&b!=a&&c!=a)
    {
        printf("triangle is isosceles");
    }
    if(a!=b&&b!=c&&c!=a)
    {
        printf("triangle is scalene");
    }
    return 0;
}
