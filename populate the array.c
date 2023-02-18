#include<stdio.h>
void main()
{
    int i,k=0,l=0,a[1000],b[1000],n;
    printf("Enter the value for N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            a[k]=i;
            k++;
        }
        else
        {
            b[l]=i;
            l++;
        }

    }
    for(i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=(l-1);i>=0;i--)
    {
        printf("%d ",b[i]);
    }
}
