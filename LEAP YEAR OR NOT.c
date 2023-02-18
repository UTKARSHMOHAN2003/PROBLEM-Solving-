#include<stdio.h>
void main()
{
    int x;
    printf("Enter the year:");
    scanf("%d",&x);
    if(((x%4==0)&&(x%100!=0)) || (x%400==0))
        printf("LEAP YEAR !!");
    else
        printf("NOT A LEAP YEAR !!");
}
