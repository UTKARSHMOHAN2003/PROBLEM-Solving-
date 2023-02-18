#include<stdio.h>
void main()
{
    int i,j,sp=1,l=0,k=1,u=0;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j<=(7-i))
            {
               printf("%d ",j);
            }
            else
                printf(" ");
        }
        if(i==1)
        {
            for(u=5;u>=1;u--)
            {
                printf("%d ",u);
            }
        }
        else
            {
              for(sp=1;sp<=k;sp++)
              {
                  printf(" ");
              }
                 k=k+3;
              for(l=(7-i);l>=1;l--)
              {
                  printf("%d ",l);
              }

            }

        printf("\n");
    }
}


