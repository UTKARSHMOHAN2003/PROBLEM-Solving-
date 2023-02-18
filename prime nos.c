#include<stdio.h>
void prime(int s,int e)
{
    int i,count,j;
    for(i=s;i<e;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d ",i);
    }

}
void main()
{
    int s,e;
    printf("Enter the lower limit:");
    scanf("%d",&s);
    printf("Enter the upper limit:");
    scanf("%d",&e);
    prime(s,e);
}
