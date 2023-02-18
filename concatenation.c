#include<stdio.h>
#include<string.h>
void main()
{
    char a[1000],b[1000];
    int x,j,i,y;
    printf("Enter first string:");
    gets(a);
    printf("Enter second string:");
    gets(b);
    x=strlen(a);
    y=strlen(b);
    j=0;
    for(i=x;i<x+y;i++)
    {
        a[i]=b[j];
        j++;
    }
    puts(a);


}
