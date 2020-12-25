#include<stdio.h>
int main()
{
    int i,n,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0&&a>0)
    {
        printf("EVEN POSITIVE\n");
    }
    else if(a%2==0&&a<0)
    {
        printf("EVEN NEGATIVE\n");
    }
    else if(a%2!=0&&a<0)
    {
        printf("ODD NEGATIVE\n");
    }
    else if(a%2!=0&&a>0)
    {
        printf("ODD POSITIVE\n");
    }
    else
    {
        printf("NULL\n");
    }
    }

}
