#include<stdio.h>
void main()
{
    int month[12]={0,3,3,6,1,4,6,2,5,0,3,5};
    char day[7]={'SUN','MON','TUE','WED','THU','FRI','SAT'};
    int dd,mm,y,c,sum,fd;
    printf("Enter the date in dd/mm/yyyy format:");
    scanf("%d/%d/%d",&dd,&mm,&y);
    if(y>=1600 && y<1700)
    {
        c=6;
    }

    else if (y>=1700 && y<1800)
    {
        c=4;
    }

    else if (y>=1800 && y<1900)
    {
        c=2;
    }

    else if (y>=1900 && y<2000)
    {
         c=0;
    }

    else
    {
        c=6;
    }

    sum=dd+mm+y+(y/4)+c;
    fd=sum%7;
    if(leap(y)==1){
        fd=fd-1;
        printf("%c",day[fd]);
    }
    else
        printf("%c",day[fd]);



}
void leap(int y)
{
    if(((y%4==0)&&(y%100!=0)) || (y%400==0))
        return 1;
    else
        return 0;
}



