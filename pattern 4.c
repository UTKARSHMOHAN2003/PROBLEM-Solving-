#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            {
                printf("%c",(63+i)+j);
            }
        }

        printf("\n");
    }

}

