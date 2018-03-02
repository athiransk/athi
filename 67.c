#include<stdio.h>
void main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    if(i%10==0)
    {
        printf("%d",i+10);
    }
    else{
    do
    {
        i++;
    }
    while(i%10!=0);
    printf("%d",i);
    }
    
    
}
