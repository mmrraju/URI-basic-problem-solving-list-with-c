#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=n;i<=(n+11);i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
