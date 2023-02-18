#include<stdio.h>
void main()
{
    int x,p;
    do{
    printf("Enter the Temperature:");
    scanf("%d",&x);
    if(x<0)
    {
        printf("Freezing Temperature!");

    }
    else if(x>0&&x<10)
    {
        printf("Very Cold Weather!");
    }
    else if(x>10&&x<20)
    {
        printf("Cold Weather!");
    }
    else if (x>20&&x<30)
    {
        printf("Normal Temperature!");

    }
    else if(x>30&&x<40)
    {
        printf("Hot Temperature!");
    }
    else
    {
        printf("Very Hot!");
    }
    printf("\nPress 1 to continue or 0 to exit:");
    scanf("%d",&p);
    }while(p==1);
}

