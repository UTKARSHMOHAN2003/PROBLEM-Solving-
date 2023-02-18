#include<stdio.h>
#include<math.h>
void main()
{

    double x,r,side;
    printf("Enter the radius of the cicle:");
    scanf("%lf",&r);
    x=sqrt(2);
    side=(2*r)/sqrt(2);
    printf("Area of largest possible rectangle = %.2lf unit square",side*side);



}
