#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i=0,j,k;
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    while(a[i]!='\0')
    {
        j=0;
        k=0;
        while(b[j]!='\0')
        {
            if(a[i]==b[j])
            {
                k++;
            }
            j++;
        }
        if(k==0)
            printf("%ch",a[i]);
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
        j=0;
        k=0;
        while(a[j]!='\0')
        {
            if(b[i]==a[j])
            {
                k++;
            }
            j++;
        }
        if(k==0)
            printf("%ch",b[i]);
        i++;
    }
}
