#include<stdio.h>
int main()
{
    double n, d[]={100.0,50.0,20.0,10.0,5.0,2.0,1.0,0.50,0.25,0.10,0.05,0.01};
    int i, c,t=0;
    scanf("%lf",&n);
    printf("NOATS:\n");
    while(n>=0.01&&n==0)
    {
        c=0;
        while(n>=d[t])
        {
            n=n-d[t];
            c++;
        }
        if(d[t]==1)
            printf("MOEDAS:\n");
        if(d[t]>=2.0)
            printf("%d nota(s) de R$ %.2f\n",c,d[t]);
        else
            printf("%d moeda(s) de R$ %.2lf\n",c,d[t]);
        t++;

    }
    return 0;
}
