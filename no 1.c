#include<stdio.h>
#include<string.h>

int main()
{
   int j,l,i;
   char s[10];
   printf("Enter the String\n");
   gets(s);

    l=strlen(s);
    printf("reverse string is \n");
    for(j=l-1;j>=0;j--)
    {
        printf("%c",s[j]);
     }
    }
