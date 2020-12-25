#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,sum=0;
    int i=0,j=0,k;
    while(1)
    {
        scanf("%f",&n);
        if(n<0||n>10)
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
            for(k=0;k<j;k++)
            {
                cout<<"nota invalida"<<endl;
            }
            printf("media = %.2f\n",(sum/2));
            break ;
        }
    }
}
