#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(y==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else
            {

                printf("%.1lf\n",(x/y));
            }
    }
}
