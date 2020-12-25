#include<stdio.h>
int main()
{
    float a;
    int i,k=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a);
        if(a>0)
        {
            k++;
        }

    }

    printf("%d valores positivos\n",k);
    return 0;

}
