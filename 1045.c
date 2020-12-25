#include<stdio.h>
int main()
{
    float a,b,c, temp;
    while(scanf("%f%f%f",&a,&b,&c)!=EOF){
        if(a>b&&b>c)
        {
            a=a;b=b;c=c;
        }
        else if(a>c&&c>b)
        {
            temp=b;
            a=a;b=c;c=temp;
        }
        else if(b>a&&a>c)
        {
            temp=a;
            a=b;b=temp;c=c;
        }
        else if(b>c&&c>a)
        {
            temp=a;
            a=b;b=c;c=temp;
        }
        else if(c>a&&a>b)
        {
            temp=a;
            a=c;b=temp;c=b;
        }
        else if(c>b&&b>a)
        {
            temp=a;
            a=c;b=b;c=temp;
        }
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(a*a==b*b+c*c)
    {
        printf("TRIANGULO RETANGULO\n");
        if((a==b)||(b==c)||(a==c))
            printf("TRIANGULO ISOSCELES\n");
    }
    else if(a*a>b*b+c*c)
    {
        printf("TRIANGULO OBTUSANGULO\n");
        if((a==b)||(b==c)||(a==c))
            printf("TRIANGULO ISOSCELES\n");

    }
    else if(a*a<b*b+c*c)
    {
        printf("TRIANGULO ACUTANGULO\n");
        if((a==b)||(b==c)||(a==c))
            printf("TRIANGULO ISOSCELES\n");
    }
    else if(a=b=c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b)||(b==c)||(c==a))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
