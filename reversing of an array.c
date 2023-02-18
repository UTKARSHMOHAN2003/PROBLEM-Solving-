#include<stdio.h>
void main()
{
    int i,n,j,a[100],b[100];
    printf("Enter the size of an array:");
    scanf("%d",&n);
    j=n-1;
    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[j]=a[i];
        j-=1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
