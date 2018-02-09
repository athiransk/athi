
#include<stdio.h>
void main()
{
  char s[10];
  int i,b=0;
  printf("enter the character");
  gets(s);
  for(i=0;s[i]!='\0';i++)
  {
      if(s[i]==' ')
      {
          b++;
      
  }
  }
  printf("%d",b);
}

