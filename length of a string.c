#include<stdio.h>
void len(char a[])
{
    int i=0,k=0;
    while(a[i]!='\0')
    {
        k++;
        i++;
    }
    printf("%d",k);
}
void main()
{
    char a[1000];
    printf("enter the string:");
    gets(a);
    len(a);

}
