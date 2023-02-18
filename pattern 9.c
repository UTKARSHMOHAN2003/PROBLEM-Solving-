#include<stdio.h>
void main()
{
    int i,j,k,s;
    for(i=1;i<=3;i++)
    {
        for(s=1;s<=(4-i);s++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        for(j=1;j<i;j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for(i=2;i>=1;i--)
    {
        for(s=1;s<=(4-i);s++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        for(j=1;j<i;j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

