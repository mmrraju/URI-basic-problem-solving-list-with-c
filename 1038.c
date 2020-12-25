#include<stdio.h>
int main()
{
    int X,Y;
    while(scanf("%d",&X)!=EOF){
    switch(X)
    {
    case 1:
           {

            scanf("%d",&Y);
            printf("Total: R$ %.2f\n",((float)Y*4));
            break ;
           }
    case 2:
            scanf("%d",&Y);
            printf("Total: R$ %.2f\n",((float)Y*4.50));
            break ;
    case 3:
            scanf("%d",&Y);
            printf("Total: R$ %.2f\n",((float)Y*5.00));
            break ;
    case 4:
            scanf("%d",&Y);
            printf("Total: R$ %.2f\n",((float)Y*2.00));
            break ;
    case 5:
            scanf("%d",&Y);
            printf("Total: R$ %.2f\n",((float)Y*1.50));
            break  ;
    }
    }
   return 0;
}
