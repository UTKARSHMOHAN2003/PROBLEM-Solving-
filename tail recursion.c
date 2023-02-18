#include<stdio.h>
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}
void main()
{
    int N;
    printf("Enter the value for N:");
    scanf("%d",&N);
    printf("%d",fact(N));
}
