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

void palindrome(char a[],int l,char b[])
{
    int i,j=0,k=0;
    for(i=l-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<l;i++)
    {
        if(a[i]==b[i])
            k++;
    }
    if(k==l)
        printf("Palindrome!!");
    else
        printf("Not a Palondrome!!");

}
void main()
{
    char a[1000],b[1000];
    int l,k=0,i;
    printf("enter the string:");
    gets(a);
    l=len(a);
    palindrome(a,l,b);


}

