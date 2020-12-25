#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,t,c,r,f;
    c=0;
    r=0;
    f=0;

    char ch[2];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        scanf("%d%c",&n,&ch);
        if(ch[0]=='c')
            c+=n;
        else if(ch[0]=='r')
            r+=n;
        else if(ch[0]=='f')
            f+=n;
    }
    printf("Total= %d\n",(c+r+f));

}
