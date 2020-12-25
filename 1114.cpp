#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    a=2002;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==a)
        {
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else
        {
            cout<<"Senha Invalida"<<endl;
        }
    }
}
