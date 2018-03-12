
#include<stdio.h>
#include<string.h>
void main()
{
    char a[20]="hello";
    int i,n=5,c;
    if(n%2==0)
    {
        c=n/2;
        a[c]='*';
        a[--c]='*';
    }
    else
    {
        c=n/2;
        a[c]='*';
    }
    printf("%s",a);
}
