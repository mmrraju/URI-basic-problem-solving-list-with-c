#include<stdio.h>
int main()
{
    int T,S;
    float c;
    while(scanf("%d%d",&T,&S)!=EOF)
    {
        c=S/(float)12;
        printf("%.3f\n",T*c);
    }

    return 0;
}
