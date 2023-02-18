#include<Stdio.h>
#include<string.h>
int main()
{
    int N,ind,i,c;
    char str[100]="1",t[100];
    scanf("%d",&N);
    while(N--)
    {
        printf("%s\n",str);
        ind=0,
        c=1;
        for(i=0;str[i];i++)
        {
            if (str[i]==str[i+1])
                c++;
            else
            {
                    t[ind++]=c+48;
                    t[ind++]=str[i];
                    c=1;
            }

        }
        t[ind]=NULL;
        strcpy(str,t);
    }
    return 0;
}
