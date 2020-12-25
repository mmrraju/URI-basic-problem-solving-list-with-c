#include<stdio.h>
#include<math.h>
int main()
{
    int h1,m1,h2,m2,a,b,c,d,e,f,g,h,i,j,m,n;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=EOF)
    {
        if(h1>12&&h2<12)
        {
            a=(24-h1)*60+m1;
            b=h2*60+m2;
            c=abs(a-b);
            d=c/60;
            e=e%60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d,e);
        }
        else if(h1<12&&h2>12)
        {
            f=(h1*60)+m1;
            g=h2*60+m2;
            h=abs(f-g);
            i=h/60;
            j=h%60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",i,h);
        }
        else if(h1<12||h2>12)
        {
            f=(h1*60)+m1;
            g=h2*60+m2;
            h=abs(f-g);
            i=h/60;
            j=h%60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",i,h);
        }
         else if(h1>12||h2<12)
        {
            a=(24-h1)*60+m1;
            b=h2*60+m2;
            c=abs(a-b);
            d=c/60;
            e=e%60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d,e);
        }
        else
        {
            m=24,n=0;
             printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",m,n);
        }

    }
    return 0;
}
