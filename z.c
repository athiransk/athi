#include<stdio.h>
void main()
{
    int a=345,count=0;
    while(a!=0)
    {
        a=a/10;
        count++;
        
    }
    printf("%d",count);
}

