#include<stdio.h>
void main()
{
  int x,y;
  printf("enter the values \n value of x and value of y :");
  scanf("%d%d",&x,&y);
  if(x>0&&y>0)
    printf("points lies in quadrant first");
  if(x<0&&y>0)
    printf("points lies in quadrant second");
  if(x<0&&y<0)
    printf("points lies in quadrant third");
  if(x>0&&y<0)
    printf("points lies in quadrant fourth");

}
