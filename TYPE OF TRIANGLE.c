#include<Stdio.h>
void main()
{
    int a[3],i;
    printf("enter the sides of the triangle:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    if((a[0]==a[1])&&(a[1]==a[2]))
    {
        printf("Equilateral Triangle!");
    }
    else if ((a[0]!=a[1])&&(a[1]!=a[2])&&(a[2]!=a[0]))
    {
        printf("Scalene Triangle!");

    }
    else
    {
        printf("Isosceles Triangle!");

    }

}
