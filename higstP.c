#include<stdio.h>
int main()
{
    int a[100];
    int i,j,k,l,m,n,p;
    scanf("%d",&n);
    p=liner();
    printf("%d\n",p);
}
int liner(int a, int b)
{
    int x,y,n,p;
    for(x=0;x<n;x++)
    {
        scanf("%d",a[x]);
    }
    for(x=0;x<n;x++)
    {
        if(a[x]==p)
        {
            printf("%d\n",a[x]);
        }

    }
    return p;
}
