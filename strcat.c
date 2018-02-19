#include <stdio.h>

#include<string.h>

void main()
{
	char a[50],b[50];
	int x,y;
	printf("enter the string1:");
	scanf("%s",a);
	printf("enter the string2:");
	scanf("%s",b);
	x=strlen(a);
	y=strlen(b);
	printf("%d",x);
	printf("%d",y);
	if(x>y)
	{
		printf("\n%s",a);
	}
	else if(y>x)
	{
		printf("\n%s",b);
	}
}
