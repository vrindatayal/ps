#include<stdio.h>
void main()
{
    char c;
    printf("enter a character to check vowel or consonant\n");
    scanf("%c",&c);

        if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        {printf("entered element is a vowel :%c",c);}
        else
        {
            printf("entered element is a cosonant :%c",c);
        }
}


