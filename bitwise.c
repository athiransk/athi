#include<stdio.h>
void main()
{
    int a=10,b=5;
    printf("%d %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d ",a,b);

}
