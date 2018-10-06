#include<stdio.h>
#include<conio.h>

void main()
{
int a[5],i;
int ele,temp=0,pos=0;
printf("enter the array elements\n");
for (i=0; i<5; i++)
scanf("%d",&a[i]);
printf("Enter the element to be search\n");
scanf("%d",&ele);

// searching for the element

for (i=0; i<5; i++)
{
if (a[i]==ele)
{
temp=1;
pos=i;
}
}

if (temp==1)
printf("Element found %d , position==%d",ele,pos);
else
printf("Element not found\n");
}
