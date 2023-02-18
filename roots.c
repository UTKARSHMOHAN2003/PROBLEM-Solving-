#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c;
    double root1,root2,real,img;
    double d;
    printf("Enter the value for the following:\n");
    printf("a:");
    scanf("%lf",&a);
    printf("b:");
    scanf("%lf",&b);
    printf("c:");
    scanf("%lf",&c);
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        root1=(-b)/(2*a);
        printf("Roots are %.2lf and %.2lf",root1,root1);
    }
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Roots are %.2lf and %.2lf",root1,root2);
    }
    if(d<0)
    {
        real=(-b)/(2*a);
        img=(sqrt(-d))/(2*a);
        printf("root 1= %.2lf+%.2lfi  and root 2= %.2lf-%.2lfi",real,img,real,img);
    }

}
