#include<stdio.h>
#include<string.h>
int main()
{
    char sent[20];
    int i;
    gets(sent);
    for(i=0;sent[i]!='\0';i++)
        {
        if(sent[i]==' '){
               printf("\n");

    }

    printf("%c",sent[i]);
}
}
