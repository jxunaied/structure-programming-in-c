#include<stdio.h>
int main()
{
    char firstnm[30],middlenm[10],lastnm[10];

    gets(firstnm);
    gets(middlenm);
    gets(lastnm);

    strcat(firstnm," ");
    strcat(firstnm,middlenm);
    strcat(firstnm," ");
    strcat(firstnm,lastnm);

    puts(firstnm);

    }
