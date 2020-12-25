#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    while(scanf("%d%d",&a,&b)!=EOF){
    if(a>b)
    {
        c=(24-a)+b;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    else if(a<b)
    {
        d=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",d);
    }
    else

    {
        e=24;

        printf("O JOGO DUROU %d HORA(S)\n",e);
    }
    }
    return 0;
}
