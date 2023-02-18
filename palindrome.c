#include<stdio.h>
int b=0;
int Palindrome(int N)
{
    int c;
    if(N==0)
        return b;
    else
    {
        c=N%10;
        b=(b*10)+c;
        return Palindrome(N/10);
    }

}


void main()
{
    int a,d,N;
    printf("Enter the number:");
    scanf("%d",&N);
    a=N;
    d=Palindrome(N);
    if(a==d)
        printf("Number is a Palindrome !!");
    else
        printf("Number is not a Palindrome !!");
}
