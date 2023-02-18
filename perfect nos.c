#include<stdio.h>
void perfect(int s,int e)
{
    int i,k,l,j,sum,a[10000];
    for(i=s;i<e;i++)
    {
        k=0;
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                a[k]=j;
                k++;
            }

        }
        for(l=0;l<k;l++)
        {
            sum=sum+a[l];
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }

}
void main()
{
    int s,e;
    printf("Enter the minimum of the range:");
    scanf("%d",&s);
    printf("Enter the maximum of the range:");
    scanf("%d",&e);
    perfect(s,e);

}
