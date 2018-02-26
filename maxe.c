
#include<stdio.h>
void main()
{
  int a[5],i,max;
  max=a[0];
  printf("enter the array elements");
  for(i=0;i<5;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++)
  {
      if(a[i]>max)
      {
          max=a[i];
      }
  }
  printf("%d",max);
}
