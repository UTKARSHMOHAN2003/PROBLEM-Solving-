#include<stdio.h>
void main()
{
    char a[1000],b[1000];
    int i=0,j;
    printf("Type the sentence:");
    gets(a);
    while(a[i]!='\0')
    {
        for(j=65;j<=90;j++)
        {
            if(a[i]==(char)j)
            {
                b[i]=(char)(j+32);
            }
        }
        for(j=97;j<=122;j++)
        {
            if(a[i]==(char)j)
            {
               b[i]=(char)(j-32);
            }
        }
        if(a[i]==(char)32)
            b[i]=(char)32;

        i++;
    }
    puts(b);


}
