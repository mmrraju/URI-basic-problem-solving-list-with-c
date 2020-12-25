#include<stdio.h>
int main()
{
    double i,j;
    for(i=0;i<=2;i+=0.2)
    {
        for(j=1;j<=3;j++)
        {
            printf("I=%ld J=%ld\n",i,j);
        }
    }
}
