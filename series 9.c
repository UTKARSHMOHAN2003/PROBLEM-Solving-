#include<stdio.h>
void main()
{
    int i,j,N;
    printf("Enter the value for N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf(" ");
    }
}
