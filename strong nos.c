#include<stdio.h>
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}
void strong(int N)
{
    int i,sum,c,a;
    for(i=1;i<=N;i++)
    {
        a=i;
        sum=0;
        c=0;
        while(a!=0)
        {
            c=a%10;
            sum=sum+fact(c);
            a=a/10;
        }
        if(sum==i)
            printf("%d ",i);

    }
}

void main()
{
    int N;
    printf("Enter the value for N:");
    scanf("%d",&N);
    strong(N);
}
