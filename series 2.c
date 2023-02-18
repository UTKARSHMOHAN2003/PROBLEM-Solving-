#include<stdio.h>
int fact(int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
}
void main ()
{
    int N,i,sum=0;
    printf("Enter value for N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+(fact(i)/i);
    }
    printf("%d",sum);
}
