#include<stdio.h>
int main()
{   int a[20][20],i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
           printf("%d",&a[i][j]);
        }
    }





}
