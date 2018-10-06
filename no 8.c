#include<stdio.h>
#include<string.h>
main()
{
    char a[5],b[5];
    int i;

    gets(a);

    for(i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }

    b[i]='\0';


    printf("%s",b);

    }
