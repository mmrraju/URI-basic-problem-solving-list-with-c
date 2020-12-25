#include<stdio.h>
int main()
{
    int a,b,i,sum,max,min;
    while(scanf("%d%d",&a,&b)!=EOF){
    sum=0;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    for(i=min+1;i<max;i++)
    {

        if(i%2!=0)
            sum+=i;
    }
    printf("%d\n",sum);
    }
    return 0;
}
