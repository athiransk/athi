#include<stdio.h>
void  swap(int , int);
void main()
{
    int c,a,b;
    printf("enter the a value");
    scanf("%d",&a);
    printf("enter the b value");
    scanf("%d",&b);
    swap(a,b);
    printf("%d",c);
}
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("%d %d",x,y);
}
