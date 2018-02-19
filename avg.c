#include<stdio.h>
void main()
{
    int n,i,sum=0,avg;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&i);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    avg=sum/n;
    printf("\n%d\n",avg);
}
