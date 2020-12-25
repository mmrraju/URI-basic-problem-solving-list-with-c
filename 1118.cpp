#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n, sum=0,av;
    int i=0,j=0,k,l;
    while(1)
    {
      xx:
        scanf("%f",&n);
        if (n<0||n>10)
        {
            j++;
        }
        else
        {
            i++;
            sum=sum+n;
        }
        if(i==2)
        {
            av=sum/2;
            for(k=0;k<j;k++)
            {
                cout<<"nota invalida"<<endl;
            }
            printf("media = %.2f\n",av);
            start:
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>l;
            i=0; /* again we need to give initial valu*/
            j=0;
            sum=0;
            if(l==1)
            goto xx;
            else if(l==2)
                break ;
            else
            {
                goto start;
            }
        }
    }
}
