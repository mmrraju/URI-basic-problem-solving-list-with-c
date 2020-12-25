#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,sml,big;
    cin>>a>>b;
    sml=min(a,b);
    big=max(a,b);
    for(i=sml+1;i<big;i++)
    {
        if(i%5==2||i%5==3)
            cout<<i<<endl;
    }
}
