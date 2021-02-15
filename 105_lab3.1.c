#include<stdio.h>
int main()
{   int a[20][20],i,j,p[5]={0,0,0,0,0},max;

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
            p[i]=p[i]+a[i][j];
        }
    }


    if(p[0]>p[1])
    {
        if(p[0]>p[2])
        {
            if(p[0]>p[3])
            {
                if(p[0]>p[4])
                {
                    printf("1 %d",p[0]);
                }
                else
                {
                    printf("5 %d",p[4]);
                }
            }
            else if(p[3]>p[4])
            {
                printf("4 %d",p[3]);
            }
        }
        else if(p[2]>p[3])
        {
            if(p[2]>p[4])
            {
                printf("3 %d",p[2]);
            }
        }
        else if(p[3]>p[4])
        {
            printf("4 %d",p[3]);
        }
        else
            printf("5 %d",p[4]);
    }
    else if(p[1]>p[2])
    {
        if(p[1]>p[3])
            {
                if(p[1]>p[4])
                {
                    printf("2 %d",p[1]);
                }
                else
                {
                    printf("5 %d",p[4]);
                }
            }
        else if(p[3]>p[4])
            {
                printf("4 %d",p[3]);
            }

        else if(p[2]>p[3])
        {
            if(p[2]>p[4])
            {
                printf("3 %d",p[2]);
            }
        }
        else if(p[3]>p[4])
        {
            printf("4 %d",p[3]);
        }
        else
            printf("5 %d",p[4]);
    }


}
