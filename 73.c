#include<stdio.h>
void main()
{
    int i,n=2;
    printf("enter the number");
    scanf("%d",i);
    for(n=2;n<=10;n++)
    {
        if(n==i)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
}
