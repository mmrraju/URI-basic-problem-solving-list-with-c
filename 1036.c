#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r,r1;
    while(scanf("%f%f%f",&a,&b,&c)!=EOF){
    d=b*b-4*a*c;

    if(d>0&&a!=0.0)
    {
        r=(-b+sqrt(d))/(2*a);
        r1=(-b-sqrt(d))/(2*a);
         printf("R1 = %.5f\nR2 = %.5f\n",r,r1);
    }

    else
        printf("Impossivel calcular\n");
    }
    return 0;
}
