#include<stdio.h>
int main()
{
    int a,b,i,count=0,sum=0,j,max;

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
        max=i;

    }



    printf("%d",max);

}
