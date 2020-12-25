#include<stdio.h>
int main()
{
    float a,b,c,d;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        d=(a*2+b*3+c*5)/10;
        printf("%.1f\n",d);
    }

    return 0;

}
