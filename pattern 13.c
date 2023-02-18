#include<stdio.h>
int a[10000];
int pattern(int N)
{
    int i,pat,pat1;
    i=N;
pat:
    printf("%d ",N);
    N=N-5;
    if(N>0)
        goto pat;
pat1:
    printf("%d ",N);
    N=N+5;
    if(N<=i)
        goto pat1;

}
void main()
{
    int N,i=0;
    printf("Enter value for N:");
    scanf("%d",&N);
    pattern(N);

}

