#include <stdio.h>
#include <string.h>
int main()
{
 int i;
  char ch[20];
  gets(ch);


    for (i = 0; ch[i]!='\0'; i++)
    { if (ch[i] == 'a')
    ch[i] = 'p'; }
    puts(ch);

    return 0;

    }
