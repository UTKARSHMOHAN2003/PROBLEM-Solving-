#include<stdio.h>
void main()
{
    int i,j,r,c,a[100][100];
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    printf("Enter the Matrix:\n");
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=r-1;i>=0;i--)
    {
        for(j=c-1;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
