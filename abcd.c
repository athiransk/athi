#include <stdio.h>
void swap(int,int);
void main()
{
  int a=10,b=5;
  swap(a,b);
}
void swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("%d %d",x,y);
}
