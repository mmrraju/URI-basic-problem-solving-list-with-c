#include<bits/stdc++.h>
#define max 100000
using namespace std;
int seive(int n)
{
    int nprime[max]={0};
    nprime[0]=1;
    nprime[1]=1;
    int i,limit,j,k;
    limit=sqrt(n*1.0)+2;
    for(i=2;i<=limit;i++)
    {
        if(nprime[i]==0)
        {
            k=2;
        for(j=2*i;j<=n;j=i*k)
        {
            nprime[j]=1;
            k++;
        }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(!nprime[i])
            cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    seive(n);
    return 0;
}

