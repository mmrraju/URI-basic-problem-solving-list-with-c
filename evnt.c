#include<stdio.h>
int main()
{
    int sd,sh,sm,ss,ed,eh,em,es,rh,rm,rs,rd;
    char ch[100],c[100];
    scanf("%s%d",ch,&sd);
    scanf("%d%s%d%s%d",&sh,c,&sm,c,&ss);
    scanf("%s%d",ch,&ed);
    scanf("%d%s%d%s%d",&eh, c, &em, c, &es);

    if(es<ss)
    {
        rs=(es+60)-ss;
        sm+=1;
    }
    else
        rs=es-ss;

    if(em<sm)
    {
        rm=(em+60)-sm;
        sh+=1;
    }
    else
        rm=em-sm;

    if(eh<sh)
    {
        rh=(eh+24)-sh;
        sd+=1;
        //rd=rd-1;
    }
    else
        rh=eh-sh;
    rd=ed-sd;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", rd, rh, rm, rs);
    return 0;
}
