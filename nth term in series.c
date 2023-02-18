#include<stdio.h>
void main()
{
    int n,i,a[100],y,d,b[100],x;
    printf("Enter the position:");
    scanf("%d",&n);
    a[0]=24;
    d=16;
    b[0]=9;
    for(i=1;i<n;i++)
    {
        a[i]=a[0]+((i-1)*d);
        y=b[i-1]+a[i];
        b[i]=y;
    }
    printf("%d",b[n-1]);
}

