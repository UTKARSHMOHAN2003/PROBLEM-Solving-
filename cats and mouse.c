#include<stdio.h>
void CatsAndMouse(int x,int y,int z)
{
    int a=0,b=0;
    while(x!=z)
    {
        if(x>z)
            x--;
        else
            x++;
        a++;
    }
    while(y!=z)
    {
        if(y>z)
            y--;
        else
            y++;
        b++;
    }
    if(a<b)
        printf("Cat A\n");
    else if(b<a)
        printf("Cat B\n");
    else
        printf("Mouse C\n");

}
void main()
{
    int q,i,x,y,z;
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        CatsAndMouse(x,y,z);
    }
}
