#include<stdio.h>
void main()
{
    int n,k=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==0)
        {
            n=n/2;
            k++;
        }
        else
            {
                n=n-1;
                k++;
            }
    }
    printf("%d",k);
}


