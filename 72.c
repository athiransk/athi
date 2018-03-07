#include<stdio.h>
void main()
{
    char a[10]="ith";
    int i;
    for(i=0;a[i]!='\0';i++)
    {
    if((a[i]=='a') || (a[i]=='e') || (a[i]=='i') || (a[i]=='o') || (a[i]=='u'))
    {
        printf("vowel is present");
    }
    else
    {
        printf("no");
    }
}
}
