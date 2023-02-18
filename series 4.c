#include<stdio.h>
#include<math.h>
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}
void main()
{
    int N,sum=0,i,x;
    printf("Enter value for N:");
    scanf("%d",&N);
    printf("Enter value for x:");
    scanf("%d",&x);
    for(i=0;i<N;i++)
    {
        sum=sum+(pow((-x),i)/fact(i));
    }
    printf("%d",sum);
}


