#include <stdio.h>
int main()
{
  int x,y;
    printf("Input the coordinate(x,y): \n");
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>0 && y>0)
    printf("The coordinate point (%d,%d) lies in First Quadrant ",x,y);
    else if (x<0 && y>0)
     printf("The coordinate point (%d,%d) lies in secound Quadrant ",x,y);
     else if (x<0 && y<0)
      printf("The coordinate point (%d,%d) lies in Third Quadrant ",x,y);
      else if (x>0 && y<0)
       printf("The coordinate point (%d,%d) lies in Forth Quadrant ",x,y);
       return 0;
}       
