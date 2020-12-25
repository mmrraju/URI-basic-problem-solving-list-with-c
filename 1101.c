#include<stdio.h>
int main()
{
    int ara[100],i,j,a,b,sum,min,max;
    while(1)
    {
        sum=0;
       scanf("%d%d",&a,&b);
       if(a<=0||b<=0)
        break ;
       else if(a>b)
       {
           max=a;
           min=b;
       }
       else
       {
           max=b;
           min=a;
       }
        for(j=min;j<=max;j++)
        {
            sum=sum+j;
            printf("%d ",j);
        }
        printf("Sum=%d\n",sum);
    }
}
