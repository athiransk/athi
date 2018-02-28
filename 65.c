
#include<stdio.h>
void main()
{
    int n=3,i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
    count++;
        }
        if(count==0)
        {
            printf("it is prime");
        }
        else
        {
            printf("it is not prime");
        }
    }
}
