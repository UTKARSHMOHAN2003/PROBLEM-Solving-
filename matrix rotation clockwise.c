#include<stdio.h>
void main()
{
    int a[100][100],i,j,m,n,b[100][100] ;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&m,&n);
    printf("Enter the Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=m-1;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            b[j][m-1-i]=a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

}
