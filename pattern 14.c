#include<stdio.h>
void main()
{
    int N,i=1,j=1,k,a,p=1,b;
    printf("Enter the value for N:");
    scanf("%d",&N);
    a=N;
    b=a;
    print:
            printf("*");
            i++;
            if(i<=N)
                goto print;
    printf("\n");
    a=a-1;
    for(k=1;k<=(N-2);k++)
    {
        j=1;
        print1:
            printf(" ");
            j++;
        if(j!=a)
               goto print1;
        else
            printf("*");
        printf("\n");
        a--;
    }
    print3:
            printf("*");
            p++;
            if(p<=b)
                goto print3;



}
