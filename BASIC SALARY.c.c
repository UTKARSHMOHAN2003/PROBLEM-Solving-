#include<stdio.h>
void main()
{
    int bs,al;
    char gr;
    float pf,hra,da;
    printf("Enter the basic salary:");
    scanf("%d",&bs);
    printf("Enter the grade:");
    scanf("%d",&gr);
    pf=(bs*11)/100;
    hra=(bs*20)/100;
    da=(bs/2);
    if(gr='A')
    {
        al=1700;
    }
    else if (gr='B')
    {
        al=1500;
    }
    else
    {
        al=1300;
    }
    printf("Total salary:%f",((bs+hra+da+al)-pf));

}
