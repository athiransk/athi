#include<stdio.h>
void main()
{
    int i,n=3,mul=1;
    printf("enter the array elements");
    for(i=0;i<=3;i++)
    {
        scanf("%d",&i);
    }
    for(i=1;i<=3;i++)
    {
        mul=mul*i;
         printf("%d",mul);
         if(mul%2==0)
         {
             printf("even");
         }
         else 
         {
             printf("odd");
         }
    }
  
    
}
