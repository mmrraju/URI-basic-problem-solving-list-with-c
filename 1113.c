#include<stdio.h>
int main()
{
    int i,j,a,b;
        while(scanf("%d%d",&a,&b)!=EOF){
        if(a==b)
            break;
        else if(a>b)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
            }
}
