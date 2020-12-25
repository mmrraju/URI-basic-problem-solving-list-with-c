#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    while(scanf("%f%f%f",&a,&b,&c)!=EOF){
    if((a+b>c)&&(a+c>b)&&(c+b>a))
    {
        d=a+b+c;
        printf("Perimetro = %.1f\n",d);
    }
    else
    {
        e=((a+b)*c)/2;
        printf("Area = %.1f\n",e);
    }
    }
    return 0;
}
