#include<stdio.h>
void main()
{
    int sum=0,n,a,k=0,b,half,i=0,sum1=0,x;
    printf("Enter an odd-digit Number:");
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
        a=n%10;
        k++;
        n=n/10;
    }
    half=(k-1)/2;
    while(i<=half)
    {
        if(i==half)
        {
            b=b/10;
            i++;
        }
        else
        {
            x=b%10;
            sum=sum+x;
            b=b/10;
            i++;
        }

    }
    while(i>half)
    {

        x=b%10;
        sum1=sum1+x;
        b=b/10;
        i++;

    }
   if(sum1==sum)
        printf("It is a balanced number !!");
    else
        printf("It is not a balanced number !!");



}
