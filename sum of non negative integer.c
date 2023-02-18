#include<stdio.h>
int number(int n)
{
    int a,sum=0,c=0;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
        c++;
    }
    if(c==1)
        return sum;
    else
    return number(sum);

}
void main()
{
    int n,x ;
    printf("Enter the number:");
    scanf("%d",&n);
    x=number(n);
    printf("%d",x);

}
