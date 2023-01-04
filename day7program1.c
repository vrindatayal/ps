#include<stdio.h>

/* Function Prototype */
int mystrlen(char str[30]);

/* Main Function */
int main()
{
 char str[30];
 int i, len;

 printf("Enter string:\n");
 gets(str);

 len = mystrlen(str); /* Function Call */
 printf("Length of given string is: %d", len);

 return 0;
}

/* Function Definition */
int mystrlen(char str[30])
{
 int i, len=0;

 for(i=0;str[i]!='\0';i++)
 {
  len++;
 }

 return(len);
}