#include<stdio.h>
#include<math.h>
void main()
{
    int i,n=4;
    for(i=0;i<=n;i++)
    {
        if(pow(2,i)>=n)
        {
            printf("%.0f",pow(2,++i));
        }
    }
}
