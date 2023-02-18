#include<stdio.h>
int len(char a[])
{
    int i=0,k=0;
    while(a[i]!='\0')
    {
        k++;
        i++;
    }
    return k;
}

void reverse(char a[],int l)
{
    int i;
    for(i=l;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
void main()
{
    char a[1000];
    int l;
    printf("enter the string:");
    gets(a);
    l=len(a);
    reverse(a,l);

}

