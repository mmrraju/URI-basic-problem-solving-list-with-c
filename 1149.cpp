#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum,i;
    cin>>a>>b;
    if(b==0||b<0)
        cin>>b;
    sum=a;
    for(i=1;i<=b;i++)
    {
        sum=sum+b;
    }
    cout<<sum<<endl;
}
