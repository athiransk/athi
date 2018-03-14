#include <stdio.h>
void main()
{
    int n,i,r,a[10],k=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2!=0)
        {
            a[k]=r;
            k++;
        }
        n=n/10;
    }
    for(i=k-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}
