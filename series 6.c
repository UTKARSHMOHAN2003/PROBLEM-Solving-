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
    int N,i,x;
    float sum=0.0;
    printf("Enter value for N:");
    scanf("%d",&N);
    printf("Enter value for x:");
    scanf("%d",&x);
    for(i=0;i<N;i++)
    {
        if(i%2==0)
            sum=sum+(pow(x,(2*i))/fact(2*i));
        else
            sum=sum-(pow(x,(2*i))/fact(2*i));
    }
    printf("%f",sum);
}
