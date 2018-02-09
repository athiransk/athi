#include<stdio.h>
void main()
{
    int a[5],i,max;
 max=-999;
  printf("enter the elements");
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

