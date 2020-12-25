#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(1)
    {
        cin>>n;
        if(n==0)
            break ;
        else
        {
            for(i=1;i<=n;i++)

            {
                if(i%n==0)
                cout<<i<<endl;
                else
                    cout<<i<<" ";
            }
        }

    }
}
