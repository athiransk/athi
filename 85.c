*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
   char s[20];
    int m=0,i,j;
    printf("enter the string");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
         {
            if(s[i]==s[j])
            {
                m++;
            }
         }
    }
    if(m==0)
    {
        printf("\n ISOGRAM");
    }
    else
    {
        printf("\n NOT A ISOGRAM");
    }
    return 0;
}
