#include<stdio.h>
int main()
{
    int i,n,mul;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        mul=i*n;
        printf("%d * %d = %d\n",i,n,mul);
    }
    return 0;
}
