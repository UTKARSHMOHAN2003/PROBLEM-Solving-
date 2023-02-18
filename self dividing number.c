#include<stdio.h>
void main()
{
    int p,n,a,x,q,l,r;
    printf("left:");
    scanf("%d",&l);
    printf("right:");
    scanf("%d",&r);
    for(n=l; n<=r; n++)
    {
        a=n;
        p=0;
        q=0;
        while(a!=0)
        {
            x=a%10;
            p++;
            if(n%x==0)
            {
                q++;
            }
            a=a/10;
        }
        if(p==q)
        {
            printf("%d ",n);
        }
    }
}
