#include<stdio.h>
int i=0;
float sum=0.0;
int mean(int a[])
{
    if(a[i]==0)
        return sum;
    else
        sum=sum+a[i];
        i++;
        return mean(a);
}


int median(int a[])
{
    int i,j,temp=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nMedian:%d",a[2]);

}
void main()
{
    int a[10],i;
    printf("Enter five Numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Mean:%.2f",(mean(a)/5.0));
    median(a);
}
