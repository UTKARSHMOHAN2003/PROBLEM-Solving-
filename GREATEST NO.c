#include<stdio.h>
void main()
{
    int a[10],i;
    printf("Enter three numbers:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    if((a[0]>a[1])&&(a[0]>a[2]))
    {
        printf("%d is the greatest!",a[0]);
    }
    else if(a[1]>a[2])
    {
        printf("%d is the greatest!",a[1]);

    }
    else
        printf("%d is the greatest!",a[2]);

}
