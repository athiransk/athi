#include<stdio.h>
void main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    if(i%7==0)
    {
        printf("it is a multiple of 7");
    }
    else
    {
        printf("not a multiple of 7");
    }
}
