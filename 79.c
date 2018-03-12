#include<stdio.h>
#include<math.h>
void main()
{
   int i,n,c,a,count=0;
   printf("enter the number");
   scanf("%d %d",&n,&i);
   c=n*i;
   printf("%d",c);
   for(a=1;a<=n;a++)
   {
       if(pow(2,a)==c)
       {
    count++;
       }
   }
   if(count==1)
   {
       printf("perfect square");
   }
}
