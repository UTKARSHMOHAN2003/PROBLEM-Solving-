#include<stdio.h>
void main()
{
    int i,n,k,j ;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==1)
        printf("1 ");
    else
    {
        for(i=1; i<n; i++)
        {
            k=0;
            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                    k++;
            }
            if(k==2)
            {
                printf("%d ",i);
            }
            if(k==1)
            printf("1 ");

        }
    }

}
