#include<stdio.h>
int fac(int n)
{
    if(n==1)
        return 1;
    else
        return n*fac(n-1);
}
void main()
{
    int N,i,sum=0;
    printf("Enter the value for N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+fac(i);
    }
    printf("%d",sum);

}
