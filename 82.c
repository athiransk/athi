#include<stdio.h>
void main()
{
char r[20];
    int i;
printf("enter the string");
scanf("%s",&r);
for(i=0;r[i]!='\0';i=i+2)
{
printf("%c\t",r[i]);
}
for(i=1;r[i]!='\0';i=i+2)
{
printf("%c\t",r[i]);
}
}
