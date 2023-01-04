/*Given a number N. The task is to print a series of asterisk(*) from 1 till N terms with
 increasing order and difference being 1.

Example 1:

Input:
N = 3
Output:
* ** ***

*/
#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter series till\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf(" ");
	}
}