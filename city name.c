#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j;
    char temp[100];
    struct city
    {
        char a[50];
    }city[1000];
    printf("number of cities:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        gets(city[i].a);
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if((int)city[i].a[0]<(int)city[j].a[0])
            {
                strcpy(temp,city[i].a);
                strcpy(city[i].a,city[j].a);
                strcpy(city[j].a,temp);
            }

        }
    }


    for(i=0;i<=n;i++)
    {
        puts(city[i].a);
    }
}

