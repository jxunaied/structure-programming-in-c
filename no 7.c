#include<stdio.h>
#include<string.h>
int main()
{
    char mn[40],rep[5],ch[5],mk[50];
    int i,j;

    gets(mn);
    gets(rep);
    gets(ch);
    strcpy(mk,mn);
    for(i=0;mn[i]!='\0';i++)
    {
        if(mn[i]==rep)
    {
        mn[i]=ch;
        strcmp(mk[j]==mn[i]);
        printf("%s",mk);
        }
      }



      return 0;
   }
