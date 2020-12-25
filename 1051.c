#include<stdio.h>
int main()
{
    float a,b;
    while(scanf("%f",&a)!=EOF){
    if(a>=0.00&&a<=2000.00)
    {
        printf("Isento\n");
    }
    else if(a>=2000.01&&a<=3000.00)
    {
        b=((a-2000.00)*8)/100;
        printf("R$ %.2f\n",b);
    }
     else if(a>=3000.01&&a<=4500.00)
    {
        b=((1000*8)/100)+(((a-3000.00)*18)/100);
        printf("R$ %.2f\n",b);
    }
     else
    {
        b=((1000.00*8)/100)+((1500.00*18)/100)+(((a-4500.00)*28)/100);
        printf("R$ %.2f\n",b);
    }
    }
    return 0;
}
