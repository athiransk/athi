#include<stdio.h>
void main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        if(i==n)
        {
            printf("number is present");
        }
    }
}

