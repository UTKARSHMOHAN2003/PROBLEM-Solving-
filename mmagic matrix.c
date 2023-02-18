#include<stdio.h>
void main()
{
    int i,j,n,a[100][100],b[100],c[100],d[100];
    int k=0,e=0,f=0,g=0,sum=0,sum1=0,sum2=0,sum3=0;
    printf("Enter the size of the Matrix:");
    scanf("%d",&n);
    printf("Enter the Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        b[i]=sum;
    }
    for(i=0;i<n;i++)
    {
        sum1=0;
        for(j=0;j<n;j++)
        {
            sum1=sum1+a[i][j];
        }
        c[i]=sum1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
               sum2=sum2+a[i][j];
            }
        }
    }
    d[k]=sum2;
    k++;
    for(i=n-1;i>=0;i--)
    {
        for(j=n-1;j>=0;j--)
        {
            if(i==j)
            {
               sum3=sum3+a[i][j];
            }
        }
    }
    d[k]=sum3;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]!=b[j])
            {
                e++;
            }

            if(c[i]!=c[j])
            {
                f++;
            }

        }
    }
    if(d[0]!=d[1])
    {
         g++;
    }

    if(e==0 && f==0 && g==0)
        printf("The Matrix is a Magic Matrix!!");
    else
        printf("The Matrix is not a Magic Matrix!!");




}
