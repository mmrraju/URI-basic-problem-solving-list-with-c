#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
    if((a>b)&&(b>c))
        {
            printf("%d\n%d\n%d\n\n",c,b,a);

        }
    else if((a>c)&&(c>b))
        {
            printf("%d\n%d\n%d\n\n",b,c,a);
        }
    else if((b>a)&&(a>c))
        {
            printf("%d\n%d\n%d\n\n",c,a,b);
        }
    else if((b>c)&&(c>a))
        {
            printf("%d\n%d\n%d\n\n",a,c,b);
        }
        else if((c>a)&&(a>b))
        {
            printf("%d\n%d\n%d\n\n",b,a,c);

        }
        else
            printf("%d\n%d\n%d\n\n",a,b,c);

    printf("%d\n%d\n%d\n",a,b,c);
    }

    return 0;
}
