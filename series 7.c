#include<stdio.h>
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}
void func(int N)
{
    int i;
    float sum=0.0;
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
            sum=sum-(i/fact((2*i)-1));
        else
            sum=sum+(i/fact((2*i)-1));
    }
    printf("%f",sum);
}
void main()
{
    int N,i;
    float sum=0.0;
    printf("Enter value for N:");
    scanf("%d",&N);
    func(N);

}



