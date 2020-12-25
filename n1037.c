#include<stdio.h>
int main()
{
    float a;
    while(scanf("%f",&a)!=EOF){
    if(a>=0&&a<=25.0000)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(a>25.0000&&a<=50.0000)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(a>75.0000&&a<=100.0000)
    {
        printf("Intervalo (75,100]\n");
    }
    else
        printf("Fora de intervalo\n");
    }
    return 0;
}
