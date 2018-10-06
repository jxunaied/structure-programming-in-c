#include<stdio.h>
#include<conio.h>
main()
{
int a[5],count_even=0,count_odd=0,i;

for(i=0;i<5;i++)

scanf("%d",&a[i]);
/* display the number of odd and even intergers */
for(i=0;i<5;i++)
{
if((a[i]%2 ==0))
count_even++;
if((a[i]%2==1))
count_odd++;
}
printf("%d %d",count_even,count_odd);
getch();
}
