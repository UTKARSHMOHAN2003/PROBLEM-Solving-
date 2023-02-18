#include<stdio.h>
void lcm(int a,int b)
{
    int i,c;
    c=a-b;
    for(i=c;i>=1;i--)
    {
        if((a%i==0)&&(b%i==0))
        {
             printf("%d",(a*b)/i);
             break;
        }

    }


}
void main()
{
    int a,b;
    printf("Enter the Two Numbers such that a>b:");
    scanf("%d %d",&a,&b);
    lcm(a,b);
}
