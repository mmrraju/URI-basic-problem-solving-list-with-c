#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        if(x==0||y==0)
        {
            break;
        }
        else if(x>0&&y>0)
        {
            cout<<"primeiro"<<endl;
        }
        else if(x<0&&y<0)
        {
            cout<<"terceiro"<<endl;
        }
        else if(x<0&&y>0)
        {
            cout<<"segundo"<<endl;
        }
        else if(x>0&&y<0)
        {
            cout<<"quarto"<<endl;
        }

    }
}
