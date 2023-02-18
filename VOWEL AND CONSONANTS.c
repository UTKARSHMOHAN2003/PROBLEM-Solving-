#include<stdio.h>
void main()
{
    char x;
    printf("Enter an alphabet:");
    scanf("%c",&x);
    if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')||(x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U'))
        printf("Vowel !!");
    else
        printf("Consonant !!");
}
