
#include<stdio.h>
void main()
{
   float i,a;
   int b,tem;
   printf("enter the number");
   scanf("%f",&i);
 a=i;
 tem=a+0.5;
 if(i>tem)
 {
      b=a+1;
     printf("round off value= %d",b);
 }
 else
 {
     printf("round off value =%d",tem);
 }
}
