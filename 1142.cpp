#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<4;j++,k++)
        {
            printf("%d ",k);
        }
        cout<<"PUM";
        k=k+1;
        cout<<endl;
    }
}
