#include<stdio.h>
void main ()
{
    int n,k,a[100],i,temp=0,j,l=0,x,y;
    printf("Enter the value for n and k:");
    scanf("%d %d",&n,&k);
    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    while(a[l]<k)
    {
        x=a[l]%10;
        y=a[l]/10;
        if((x-y)==1 || (y-x)==1)
            printf("%d ",a[l]);
        l++;
    }


}
