#include<stdio.h>
int main()
{   int a,i,j,n,sum=0,max=0;

    scanf("%d",&n);

    int ch[n],hu[n],sum2[]={0};

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&ch[i],&hu[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ch[j]==i)
            {
                sum=sum+hu[i];
                sum2[i]=sum;
            }
        }
        sum=0;
    }

    for(i=0;i<n;i++)
    {
        if(max<sum2[i])
        {
            max=sum2[i];
        }
    }

    printf("%d",max);

}
