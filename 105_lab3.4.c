#include<stdio.h>
int main()
{
    int a,b,i,count=0,sum=0,j;

    scanf("%d",&a);
    int A[a];
    for(i=2;i<=a;i++)
    {
        for(j=1;j<a;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count<=2)
        A[i-2]=i;

    }

    for(i=0;i<=10;i++)
    {
        if(sum<=a)
        sum=A[i];

    }

    printf("%d",sum);

}
