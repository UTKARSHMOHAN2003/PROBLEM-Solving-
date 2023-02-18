#include<stdio.h>
void main()
{
    int i,j,k,s;
    for(i=1;i<=4;i++)
      {

          for(s=1;s<=(4-i);s++)
          {
              printf(" ");
          }
          k=i;
          for(j=1;j<=i;j++)
          {
              printf("%d",k);
              k++;
          }
          k=k-2;
          for(j=1;j<i;j++)
          {
              printf("%d",k);
              k--;
          }
          printf("\n");
      }

}


