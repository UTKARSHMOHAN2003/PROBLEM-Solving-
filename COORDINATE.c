#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the coordinates in (x,y) format:");
    scanf("%d,%d",&x,&y);
    if(x>0 && y>0)
    {
        printf("First Quadrant");
    }
    else if (x<0&&y>0)
    {
        printf("Second Quadrant");
    }
    else if(x<0&&y<0)
    {
        printf("Third Quadrant");
    }
    else
    {
        printf("Fourth Quadrant");
    }
}
