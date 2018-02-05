#include<stdio.h>
void main()
{
int b=0,i;
char s[500];
printf("enter the string");
scanf("%s",&s);
for(i=0;s[i]!=NULL;i++)
{
if(s[i]=='.')
b++;
}
printf("%d",b);
}
