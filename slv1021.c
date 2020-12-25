#include<stdio.h>
int main()
{
    double n,d[]={100.0,50.0,20.0,10.0,5.0,2.0,1.0,0.50,0.25,0.10,0.05,0.01};
    int t=0,c, k=1, temp;
    scanf("%lf",&n);
    printf("NOTAS:\n");
    while(n>=0.001)
    {
        c=0;
        while(n>=d[t])
        {
            n=n-d[t];
            c++;
        }
        if(n<=1 && n>=0 && k==1){
            printf("MOEDAS:\n");
            k=0;
        }
        if(d[t]>=2.0)
            printf("%d nota(s) de R$ %.2lf\n",c,d[t]);
        else
            printf("%d moeda(s) de R$ %.2lf\n",c,d[t]);
        t++;
    }
    return 0;
}
