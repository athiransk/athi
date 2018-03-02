#include <stdio.h>
#include<string.h>
int main()
{
  char s[30];
int count=0,i;
printf("enter the string");
scanf("%[^\n]*%c",&s);
for(i=0;s[i]!='\0';i++)
{
  if(str[i]==' ')
  {
count++;
  }
}
printf("number of words in a sentence is %d",count+1);
    return 0;
}


