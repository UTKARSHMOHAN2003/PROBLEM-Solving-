#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int i=0,j=0,k=0,p=0,q=0,l;
    gets(a);
    gets(b);
    l=strlen(a);
    while(a[i]!='\0')
    {
               if((int)a[i]>(int)b[i])
               {
                   printf("1");
                   p++;
                   break;
               }
               else if((int)a[i]<(int)b[i])
               {
                   printf("-1");
                   q++;
                   break;
               }
               else
               {
                   k++;
               }
        i++;

    }
    if(p==0 && q==0 && k==l)
        printf("0");

}
