#include<stdio.h>
void main()
{
    int i;
    char a[1000];
    printf("Enter the string:");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]!=' ')
            printf("%c",a[i]);
        i++;
    }
}
