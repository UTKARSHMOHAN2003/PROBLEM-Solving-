#include<stdio.h>
void main()
{
    int t,a[100],i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i]+1);
    }
}
