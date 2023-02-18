#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,k,power,ans,i;
    printf("Enter the value for:\n");
    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("K:");
    scanf("%d",&k);
    power=pow(a,b);
    for(i=0;i<k;i++)
    {
        ans=power%10;
        power=power/10;
    }
    printf("%d",ans);
}
