#include<stdio.h>
void main()
{
    int n,diag;
    printf("Enter the strength of the meeting:");
    scanf("%d",&n);
    diag=(n*(n-3))/2;
    if(diag<0)
    {
        printf("%d",n-1);
    }
    if(diag>=0)
    {
        printf("%d",n+diag);
    }

}
