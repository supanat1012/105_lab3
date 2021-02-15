#include<stdio.h>
int main()
{   int a[20][20],i,j,p[4]={0},max;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
            p[i]=p[i]+a[i][j];
        }
    }

   /* for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
           p[i]=a[i][j]+a[i][j+1]+p[i];
        }

    }*/

    for(j=0;j<4;j++)
        {
           printf("%d\n",p[j]);
        }




}
