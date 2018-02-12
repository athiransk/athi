
#include<stdio.h>
void main()
{
    int a[10],i,j,t;
    printf("Enter the array numbers");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nThe smallest number is %d",a[0]);
    printf("\nThe largest number is %d",a[3-1]);
}
