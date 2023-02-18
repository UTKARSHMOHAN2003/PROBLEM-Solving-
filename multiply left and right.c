#include<stdio.h>
void main()
{
    int a[100],sum1=0,sum2=0,i,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        for(i=0;i<=(n-2)/2;i++)
        {
            sum1=sum1+a[i];
        }
        for(i=(((n-2)/2)+1);i<n;i++)
        {
            sum2=sum2+a[i];
        }
        printf("%d",sum1*sum2);
    }
    else
    {
        for(i=0;i<(n-1)/2;i++)
        {
            sum1=sum1+a[i];
        }
        for(i=((n-1)/2);i<n;i++)
        {
            sum2=sum2+a[i];
        }
        printf("%d",sum1*sum2);
    }

}
