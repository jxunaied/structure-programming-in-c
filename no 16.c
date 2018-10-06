#include <stdio.h>
#include <string.h>
void main(void)
{
   char src[25],dest[25];
   printf("Enter the String which is to be copied to another String:\n");
   gets(src);
   strcpy(dest,src);
   printf("\nCopied String is %s",dest);
}
