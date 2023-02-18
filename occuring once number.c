#include<stdio.h>
void main()
{
    int n,i,j,a[100],k;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                k++;
        }
        if(k==1)
            printf("%d ",a[i]);
    }

}
