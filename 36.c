#include<stdio.h>
void main()
{
    char s[10];
    int i,b=0;
    printf("enter the string");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]=='.')||(s[i]>='0'&& s[i]<='9'))
        {
            b++;
        }
    }
    printf("%d",b);
}

