#include<stdio.h>
void main()
{
    int i,j,n,m,a[100],b[100],k,q=0,p=0,c[100],d[100] ;
    printf("Enter the sizes of the array:");
    scanf("%d %d",&n,&m);
    printf("Enter the first array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the second array:");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
                k++;
        }
        if(k!=0)
        {
            c[p]=a[i];
            p++;
        }

    }
    printf("Similar elements:");
    for(i=0;i<p;i++)
        printf("%d ",c[i]);
}
