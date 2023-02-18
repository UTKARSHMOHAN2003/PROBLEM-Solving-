#include<stdio.h>
void main ()
{
    int n,i,a[100],c=0,j=0,k=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(c!=n)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                continue;
            else
                a[i]=a[i]-1;
        }
        k++;
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==0)
                c++;
        }
    }
    printf("%d Day !!",k);

}
