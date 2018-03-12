#include<stdio.h>
void main()
{
   int i,count=0,n;
   printf("enter the number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       {
           count++;
       }
   }
   if(count==2)
   {
       printf("not a composite");
   }
   else
   {
       printf("yes");
   }
}
