#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l=1,x,y;
    cin>>x>>y;
    for(i=1;i<=y;i++)
    {
        if(i%x==0)
        cout<<i<<endl;
        else
        cout<<i<<" ";

    }
}
