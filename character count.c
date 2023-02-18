#include<stdio.h>
void main()
{
    char a[100],ch;
    int i=0,c=0;
    printf("Enter the string:");
    gets(a);
    printf("Enter the character for count:");
    scanf("%c",&ch);
    while(a[i]!='\0')
    {
        if(a[i]==ch)
            c++;
        i++;
    }
    printf("Character count=%d",c);
}
