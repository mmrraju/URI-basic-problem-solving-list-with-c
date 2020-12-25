#include<stdio.h>
int main()
{
    int a,b,temp,temp1,c;
    scanf("%d%d%d",&a,&b,&c);

        temp=a;
        a=c;
        c=temp;
        printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}
