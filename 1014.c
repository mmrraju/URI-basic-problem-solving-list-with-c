#include<stdio.h>
int main()
{
    int X;
    float Y;
    while(scanf("%d%f",&X,&Y)!=EOF)
    {
    printf("%.3f km/l\n",(X/Y));
    }
    return 0;
}
