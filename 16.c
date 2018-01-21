		
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num=10,i,count=0;
	for(i=2;i<10;i++)
	{
		if(num%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("This is a prime number");
	}
	else
	{
		printf("This is not a prime number");
	}
	getch();
}
