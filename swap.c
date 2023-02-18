#include<stdio.h>
void main()
{
    int n,i,a[1000],temp=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i+=2)
    {
        temp=a[i];
        a[i]=a[i-1];
        a[i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
