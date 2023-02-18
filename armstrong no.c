#include<stdio.h>
#include<math.h>
void Arm(int N)
{
    int a,c,sum=0;
    a=N;
    while(N!=0)
    {
        c=N%10;
        sum=sum+pow(c,3);
        N=N/10;
    }
    if(a==sum)
        printf("Number is an Armstrong Number !!");
    else
        printf("Number is not an Armstrong Number !!");
}
void main()
{
    int N,a,b,c,sum=0;
    printf("Enter the number:");
    scanf("%d",&N);
    Arm(N);
}
