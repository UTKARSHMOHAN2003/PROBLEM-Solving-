#include<stdio.h>
void main()
{
    int i,j,k,s;
    for(i=1;i<=4;i++)
    {
        for(s=1;s<=(4-i);s++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        k=2;
        for(j=1;j<i;j++)
        {
            printf("%d",k);
            k++;
        }

        printf("\n");
    }
}
