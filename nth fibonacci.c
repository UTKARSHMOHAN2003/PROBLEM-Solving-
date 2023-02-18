#include<stdio.h>
int fib(int N)
{
    if(N==1||N==2)
        return 1;
    else
    {
        return fib(N-1)+fib(N-2);
    }

}


void main()
{
    int N;
    printf("Enter the value for N:");
    scanf("%d",&N);
    printf("%d",fib(N));
}
