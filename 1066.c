#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,i,e=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            b++;
        }
        else
        {
            c++;
        }
        if(a>0)
        {
            d++;
        }
        else if(a<0)
        {
            e++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",b,c,d,e);
    return 0;
}
