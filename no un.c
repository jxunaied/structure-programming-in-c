//14 nb
#include <stdio.h>
#include <string.h>
int main()
{ int i, flag, loc; char ch[20], cha;
 gets(ch);
 printf("What r u searching for?:");
 scanf("%c", &cha);
 for (i = 0; ch[i]!='\0'; i++)
 { if (ch[i] == cha)
 { flag = 1; loc = i; break;
  }
  }
  if (flag == 1)
   printf("Found in %d\n", loc+1);
   else printf("Not found\n");
   return 0;
   }
