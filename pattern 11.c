#include<stdio.h>
void main()
{
    int i,s,t;
    for(i=1;i<=5;i++)
    {
        for(s=1;s<=i;s++)
            {
                if(s<=i)
                {
                     printf("%d",s);
                }
                else
                    printf(" ");
            }

        for(t=5;t>=1;t--)
            {
                if(t<=i)
                {
                    printf("%d",t);
                }
                else
                    printf(" ");

            }
        printf("\n");
    }
}
