#include<stdio.h>
int main()
{
    float x,y;
    while(scanf("%f%f",&x,&y)!=EOF){
    if(x>0.0&&y>0.0)
        printf("Q1\n");
    else if(x<0.0&&y>0.0)
        printf("Q2\n");
    else if(x<0.0&&y<0.0)
        printf("Q3\n");
    else if(x>0.0&&y<0.0)
        printf("Q4\n");
    else if(x==0&&y!=0.0)
            printf("Eixo Y\n");
    else if(x!=0.0&&y==0)
                printf("Eixo X\n");
    else
        printf("Origem\n");
    }

    return 0;
}
