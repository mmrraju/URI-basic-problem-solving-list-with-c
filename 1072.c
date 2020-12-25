#include<stdio.h>
int main()
{
    int mul,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul=0;
        if(i%2==0)
        {
            mul=i*i;
            printf("%d^2 = %d\n",i,mul);
        }
    }

}
