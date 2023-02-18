#include<stdio.h>
void main ()
{
    int i,N,sum=0;
    printf("Enter the value for N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+(i*(i+1)*(i+2));
    }
    printf("%d",sum);
}
