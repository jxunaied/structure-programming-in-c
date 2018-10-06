#include<stdio.h>
void main()
{
char *str;
int count = 0,i;
printf("Enter the String:");
gets(str);
for(i=0;str[i]!='\0';i++){
count++;
}
printf("\nThe length of the string is %d.\n",count);

}
