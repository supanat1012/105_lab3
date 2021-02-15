#include<stdio.h>
int main()
{   int a[20][20],i,j,p[5]={0,0,0,0,0},max=0,humax;

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
            p[i]=p[i]+a[i][j];
        }
    }

    for(i=0;i<5;i++)
    {
        if(max<p[i])
        {
            max=p[i];
            humax=i+1;
        }
    }
    printf("%d %d",humax,max);
}
