#include<stdio.h>
int power(int a,int b)
{
    if(b==0)
        return 1;
    else
        return a*power(a,b-1);
}
void main()
{
    int i,a,b;
    printf("Enter the value for a:");
    scanf("%d",&a);
    printf("Enter the value for b:");
    scanf("%d",&b);
    printf("%d",power(a,b));
}
