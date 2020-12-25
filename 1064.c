#include<stdio.h>
int main()
{
    float a,ab,sum=0.0;
    int i,t=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a);
        if(a>0)
        {
            t++;
            sum=sum+a;
        }
    }
    ab=sum/t;
    printf("%d valores positivos\n%.1f\n",t,ab);
    return 0;
}
