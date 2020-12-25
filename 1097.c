#include<stdio.h>
int main()
{
    int i,j=7,l;
    for(i=1;i<=9;i+=2)
    {
        for(l=0;l<3;j--)
        {
            printf("I=%d J=%d\n",i,j);
            l++;
        }
        j+=5;

    }
    return 0;
}
