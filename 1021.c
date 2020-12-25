#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n/100);
    printf("%d nota(s) de R$ 50.00\n",(n%100)/50);
    printf("%d nota(s) de R$ 20.00\n",((n%100)%50)/20);
    printf("%d nota(s) de R$ 10.00\n",(((n%100)%50)%20)/10);
    printf("%d nota(s) de R$ 5.00\n",((((n%100)%50)%20)%10)/5);
    printf("%d nota(s) de R$ 2.00\n",(((((n%100)%50)%20)%10)%5));
    return 0;
}
