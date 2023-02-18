#include<stdio.h>
void main ()
{
    int n,i,j,a[50],temp=0 ;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the Array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d",a[n-1]);
}
