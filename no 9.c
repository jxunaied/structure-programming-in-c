#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char a[80];
int i;
printf("Enter a string\n");
gets(a);
for(i=0;a[i]!='\0';i++)
{
for(;a[i]==' ';i++);
{
 if(a[i]>='a'&&a[i]<='z')
   {
   a[i]-=32;
   }
 }
  for(;a[i]!=' '&&a[i]!='\0';i++)
  a[i]=a[i];
}
printf("%s",a);

}
