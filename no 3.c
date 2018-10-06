#include<stdio.h>
int main()
{
    char my[10],name[10];
    gets(my);
    gets(name);

    strcat(my," ");
    strcat(my,name);
    puts(my);

    return 0;
    }
