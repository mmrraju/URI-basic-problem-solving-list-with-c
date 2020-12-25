#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,j=0,k=0;
    while(1)
    {
        start:
            cin>>n;
            if(n==4)
                break ;
            if(n==1)
                i++;
            if(n==2)
                j++;
            if(n==3)
                k++;
            else
                goto start;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",i,j,k);

}
