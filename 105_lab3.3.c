#include<stdio.h>
int main()
{
    int a,b,i=2;

    scanf("%d",&a);


    while(a>1)
    {
        if(a%i==0)
        {
            printf("%d\n",i);
            a=a/i;

            if(a==1)
            {
                printf("%d",a-1);
            }
        }
        else
        i++;


    }





}
