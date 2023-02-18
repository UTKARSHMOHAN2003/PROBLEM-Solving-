#include<stdio.h>
void main()
{
    int i,j,n,a[100][100],top,right,bottom,left,d;
    printf("Enter the size of matrix:");
    scanf("%d",&n);
    printf("Enter the Matrix:\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    top=0;
    bottom=n-1;
    left=0;right=n-1;
    d=0;
    while(d<2*n)
    {
        if(d==0)
        {
            for(i=left;i<right;i++)
            {
                printf("%d ",a[top][i]);
            }
            top++;
        }
        if(d==1)
        {

            for(i=top;i<=bottom;i++)
            {
                printf("%d ",a[i][right]);
            }
            right--;
        }
        if(d==2)
        {
            for(j=right;j>=left;j--)
            {
                printf("%d ",a[bottom][j]);
            }
            bottom--;
        }
        if(d==3)
        {
            for(i=bottom;i>=top;i--)
            {
                printf("%d ",a[i][left]);
            }
            left++;
        }
        d=(d+1)%4;
    }

}
