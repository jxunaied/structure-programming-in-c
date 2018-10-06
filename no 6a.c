#include <stdio.h>
#include<string.h>
int main()
{
   char a[100], b[100],c;
   int  n, d;

   printf("Enter the number of elements in string\n");
   scanf("%d", &n);

   printf("Enter the string elements\n");

   for (c = 0; c < n ; c++)
      scanf("%d", &a[c]);
    for (c = n - 1,d = 0; c >= 0; c--, d++)
      b[d] = a[c];


   for (c = 0; c < n; c++)
      a[c] = b[c];

   printf("Reverse string is\n");

   for (c = 0; c < n; c++)
      printf("%c\n", a[c]);

   return 0;
}
